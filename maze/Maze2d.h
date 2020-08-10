//
// Created by Saar Pernik on 09/08/2020.
//

#ifndef UNTITLED1_MAZE2D_H
#define UNTITLED1_MAZE2D_H
#include <vector>
#include <iostream>
#define NORTH 0
#define EAST  1
#define SOUTH 2
#define WEST  3

class Maze2d {
public:
    Maze2d(int width , int height);
    void PrintGrid();

private:
    void Visit(int x, int y);
    void ResetGrid();
    int IsInBounds(int x, int y);

    int GRID_WIDTH;
    int GRID_HEIGHT;
    std::vector<std::vector<char>> grid;
};


#endif //UNTITLED1_MAZE2D_H
