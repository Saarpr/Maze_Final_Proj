//
// Created by Saar Pernik on 09/08/2020.
//
#pragma once
#include "Maze2d.h"
#include <string>
#include <iostream>
#include <chrono>

class Maze2dGenerator : public Maze2d{
public:
    virtual Maze2d Generte(int width , int height) = 0;
    std::string measureAlgorithmTime(int maxSize)
    {
        auto t1 = std::chrono::high_resolution_clock::now();
        Generte(maxSize);
        auto t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        std::cout << "Time elapsed: " << duration <<std::endl;
    }
};




class randomMazeGenerator : public Maze2dGenerator {
public:
    virtual Maze2d Generte(int width , int height){
        Maze2d* mz = new Maze2d(width,height);
    }

    int IsInBounds(int x, int y) { // Returns "true" if x and y are both in-bounds.
        if (x < 0 || x >= (GRID_HEIGHT - 1)) return false;
        if (y < 0 || y >= (GRID_WIDTH - 1)) return false;
        return true;
    }

    void Visit( int x, int y )
    {
// Starting at the given index, recursively visits every direction in a randomized order.
// Set my current location to be an empty passage.
        grid[x][y] = ' ';
// Create an local array containing the 4 directions and shuffle their order.
        int directions[4];
        directions[0] = NORTH;
        directions[1] = EAST;
        directions[2] = SOUTH;
        directions[3] = WEST;
        for (int i = 0;i<4; ++i)
        {
            int r = rand() & 3;
            int temp = directions[r];
            directions[r]  = directions[i];
            directions[i]  = temp;
        }
// Loop through every direction and attempt to Visit that direction.

        for (int i = 0;i<4; ++i)
        {
// dx,dy are offsets from current location. Set them based
// on the next direction I wish to try.
            int dx = 0, dy = 0;
            switch (directions[i])
            {
                case NORTH:
                    dy = -1;
                    break;
                case SOUTH:
                    dy = 1;
                    break;
                case EAST:
                    dx = 1;
                    break;
                case WEST:
                    dx = -1;
                    break;
            }
            int x2 = x + (dx << 1);
            int y2 = y + (dy << 1);
            if (IsInBounds(x2, y2))
            {
                if (grid[x2][y2] == '#')
                {
// (x2,y2) has not been visited yet... knock down the
// wall between my current position and that position
                    grid[x2-dx][y2-dy] = ' ';
// Recursively Visit (x2,y2)
                    Visit(x2, y2);
                }
            }
        }
    }
};


