//
// Created by Victor Hamon on 27/07/2021.
//

#ifndef MAZE_MAZE_HPP
#define MAZE_MAZE_HPP


#include <vector>
#include <string>

class Maze {
public:
    Maze();

    Maze(int maxX, int maxY);

    void GenerateMaze();

    int getSizeX() const;

    void setSizeX(int sizeX);

    int getSizeY() const;

    void setSizeY(int sizeY);

    int getDefaultX() const;

    void setDefaultX(int defaultX);

    int getDefaultY() const;

    void setDefaultY(int defaultY);

    [[nodiscard]] const std::vector<std::string> &getMazeData() const;

    void setMazeData(const std::vector<std::string> &mazeData);

private:
    std::vector<std::string> _mazeData;
    int _sizeX;
    int _sizeY;
    int _defaultX = 25;
    int _defaultY = 25;
};


#endif //MAZE_MAZE_HPP
