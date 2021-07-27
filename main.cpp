#include <SFML/Graphics.hpp>
#include "Classes/Maze.hpp"

#define SCREEN_W 1920.0
#define SCREEN_H 1080.0

std::vector<sf::RectangleShape> createBoard(Maze& maze) {
    std::vector<sf::RectangleShape> board;
    const std::vector<std::string>& mazeData = maze.getMazeData();

    for (int y = 0; y < maze.getSizeY(); ++y) {
        for (int x = 0; x < maze.getSizeX(); ++x) {
            sf::RectangleShape square;
            sf::Vector2f squareSize(float(SCREEN_W/maze.getSizeX()), float(SCREEN_H/maze.getSizeY()));
            square.setSize(squareSize);
            square.setPosition(squareSize.x * (float)x, squareSize.y * (float)y);
            if (mazeData[y][x] == 'O') {
                square.setFillColor(sf::Color::White);
            } else {
                square.setFillColor(sf::Color::Black);
            }
            board.push_back(square);
        }
    }
    return board;
}

void drawBoard(sf::RenderWindow& window, std::vector<sf::RectangleShape>& board) {
    for (auto& square : board) {
        window.draw(square);
    }
}

int main()
{
    Maze maze(80, 45);
    maze.GenerateMaze();
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Maze resolver");
    auto buffer = createBoard(maze);
    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        drawBoard(window, buffer);
        window.display();
    }
}