//
// Created by κΉνν on 2021/07/07.
//

#include <iostream>
#include "Maze.h"
#include "Eller.h"

int main(){
    Maze maze;

    Eller eller(maze);

    eller.MakeMaze();

    maze.PrintMaze();
}