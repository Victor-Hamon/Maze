//
// Created by Victor Hamon on 27/07/2021.
//

#include "Maze.hpp"

Maze::Maze() {
    _sizeX = _defaultX;
    _sizeY = _defaultY;
}

Maze::Maze(int maxX, int maxY) {
    _sizeX = maxX;
    _sizeY = maxY;
}

const std::vector<std::string> &Maze::getMazeData() const {
    return _mazeData;
}

void Maze::setMazeData(const std::vector<std::string> &mazeData) {
    _mazeData = mazeData;
}

int Maze::getSizeX() const {
    return _sizeX;
}

void Maze::setSizeX(int sizeX) {
    _sizeX = sizeX;
}

int Maze::getSizeY() const {
    return _sizeY;
}

void Maze::setSizeY(int sizeY) {
    _sizeY = sizeY;
}

int Maze::getDefaultX() const {
    return _defaultX;
}

void Maze::setDefaultX(int defaultX) {
    _defaultX = defaultX;
}

int Maze::getDefaultY() const {
    return _defaultY;
}

void Maze::setDefaultY(int defaultY) {
    _defaultY = defaultY;
}

void Maze::GenerateMaze() {
    for (int y = 1; y < _sizeY - 1; ++y) {
        std::string newLine;
        for (int x = 1; x < _sizeX - 1; ++x) {
            if (y % 2 == 0 && x % 2 == 0) {
                newLine.append("O");
            } else {
                newLine.append("X");
            }
        }
        _mazeData.push_back(newLine);
    }
}
