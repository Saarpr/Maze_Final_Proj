//
// Created by Saar Pernik on 09/08/2020.
//

#ifndef UNTITLED1_VIEW_H
#define UNTITLED1_VIEW_H
#include <iostream>
#include <string>
#include "Controller.h"

class view {
public:
    void help(){
        std::cout<<"\n"
                   "Help:\n"
                   "    dir <path>                              shows all files in path.\n"
                   "    generate_maze <name> <other params>     generate a new maze.\n"
                   "    display <name>                          display specific maze.\n"
                   "    save_maze <name> <file name>            save specific maze to file.\n"
                   "    load_maze <file name> <name>            load specific maze from file.\n"
                   "    maze_size <name>                        memory size of specific maze.\n"
                   "    file_size <name>                        file size of specific maze.\n"
                   "    solve <name> <algorithm>                solve the maze with specific algorithm.\n"
                   "    display_solution <name                  shows solution steps.\n"
                   "    exit                                    exit program.\n"
                   ;
    }
    view(std::ostream &_out,std::istream& _in):exit(1) , out(_out), in(_in) {
        con = new Controller();
        std::cout<<"\n"
                 " ___    ___    __  __   _    _______ _ \n"
                 "|_  )__|   \\  |  \\/  | /_\\  |_  / __| |\n"
                 " / /___| |) | | |\\/| |/ _ \\  / /| _||_|\n"
                 "/___|  |___/  |_|  |_/_/ \\_\\/___|___(_)\n"
                 "                                       ";
        help();
        std::string client_input;
        while (exit!=0){
            getline(in,client_input);
            exit = con->checkCommand(client_input);
        }
    }

private:
    int exit;
    Controller * con;
    std::ostream & out;
    std::istream & in;
};


#endif //UNTITLED1_VIEW_H
