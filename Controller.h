//
// Created by Saar Pernik on 09/08/2020.
//

#ifndef UNTITLED1_CONTROLLER_H
#define UNTITLED1_CONTROLLER_H

#include <map>
#include "Command.h"
#include <vector>


class Controller {
public:
    Controller() {
        _maze = new Maze2d();
        commands["dir"] = new dirCommand();
        commands["generate_maze"] = new generateCommand(_maze);
        commands["display"] = new displayCommand();
        commands["save_maze"] = new saveCommand();
        commands["load_maze"] = new loadCommand();
        commands["maze_size"] = new sizeCommand();
        commands["file_size"] = new fsizeCommand();
        commands["solve"] = new solveCommand(_maze);
        commands["display_solution"] = new solutionCommand();
        commands["exit"] = new exitCommand();
    }
    ~Controller() {}

    int checkCommand(const std::string &str) {
            std::vector<std::string> com;
            std::string word = "";
            for (const auto x : str)
            {
                if (x == ' ')
                {
                    com.push_back(word);
                    word = "";
                }
                else
                {
                    word = word + x;
                }
            }
            com.push_back(word);

            if (commands[com[0]]){
               return commands[com[0]]->run();
            }
    }

private:
    std::map<std::string, Command *> commands;
    Maze2d * _maze;
};


#endif //UNTITLED1_CONTROLLER_H
