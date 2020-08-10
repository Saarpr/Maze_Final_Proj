//
// Created by Saar Pernik on 09/08/2020.
//
#pragma once
#include <vector>
#include <iostream>
#define NORTH 0
#define EAST  1
#define SOUTH 2
#define WEST  3

class Maze2d {
public:
    Maze2d(int width, int height):GRID_WIDTH(width) , GRID_HEIGHT(height)
    {
        ResetGrid();
    }
    int get_width() const {
        return GRID_WIDTH;
    }
    int get_height() const {
        return GRID_WIDTH;
    }
    std::vector<std::vector<char>> get_grid(){
           return grid;
    }
    void PrintGrid() {
        for (int i=0; i<GRID_HEIGHT; ++i)
        {
            for (int j = 0; j < GRID_WIDTH; ++j) {
                std::cout << grid[i][j];
            }
            std::cout << std::endl;
        }
    }
    void set_char_in_grid(int x , int y , char sign){
        grid[x][y] = sign;
    }

private:
    void ResetGrid() { // Fills the grid with walls ('#' characters).
        grid.resize(GRID_HEIGHT, std::vector<char>(GRID_WIDTH, '#'));
    }

private:
    int GRID_WIDTH;
    int GRID_HEIGHT;
    std::vector<std::vector<char>> grid;
};

