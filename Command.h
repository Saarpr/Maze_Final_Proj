//
// Created by Saar Pernik on 10/08/2020.
//

#ifndef UNTITLED1_COMMAND_H
#define UNTITLED1_COMMAND_H

#include <iostream>
#include "Maze2d.h"

class Command {
public:
    virtual int run() = 0;
};

/*------------------------------------------------------------------------*/

class dirCommand : public Command {
public:
    dirCommand(){}

    int run() {
        std::cout << "Fuck all bitches! - dirCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/

class generateCommand : public Command {
public:
    generateCommand(Maze2d * maze) :_maze(maze) {}

    int run() {
        std::cout << "Fuck all bitches! - generateCommand" << std::endl;
        _maze->generate_maze();
        return 1;
    }
private:
    Maze2d * _maze;
};

/*------------------------------------------------------------------------*/

class displayCommand : public Command {
public:
    displayCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - displayCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/
class saveCommand : public Command {
public:
    saveCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - saveCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/
class loadCommand : public Command {
public:
    loadCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - loadCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/
class sizeCommand : public Command {
public:
    sizeCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - sizeCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/
class fsizeCommand : public Command {
public:
    fsizeCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - fsizeCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/
class solveCommand : public Command {
public:
    solveCommand(Maze2d * maze) :_maze(maze) {}

    int run() {
        std::cout << "Fuck all bitches! - sizeCommand - solveCommand" << std::endl;
        _maze->solve();
        return 1;

    }

private:
    Maze2d * _maze;
};

/*------------------------------------------------------------------------*/
class solutionCommand : public Command {
public:
    solutionCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - solutionCommand" << std::endl;
        return 1;

    }

private:
};

/*------------------------------------------------------------------------*/
class exitCommand : public Command {
public:
    exitCommand() {}

    int run() {
        std::cout << "Fuck all bitches! - exitCommand" << std::endl;
        return 0;
    }

private:
};
/*------------------------------------------------------------------------*/
#endif //UNTITLED1_COMMAND_H
