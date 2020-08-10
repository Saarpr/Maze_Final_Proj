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
    virtual Maze2d Generte(int mazeSize) = 0;
    std::string measureAlgorithmTime(int maxSize){
        auto t1 = std::chrono::high_resolution_clock::now();
        Generte(maxSize);
        auto t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
        std::cout << "Time elapsed:" << duration <<std::endl;
    }
};


//#ifndef UNTITLED1_RANDOMMAZEGENERATOR_H
//#define UNTITLED1_RANDOMMAZEGENERATOR_H
//#include "Maze2dGenerator.h"

class randomMazeGenerator : public Maze2dGenerator {
public:


};


//#endif //UNTITLED1_MAZE2DGENERATOR_H
