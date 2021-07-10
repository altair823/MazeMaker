//
// Created by 김태현 on 2021/07/07.
//

#include <iostream>
#include "Maze.h"
#include "Eller.h"

int main(){
    Maze maze;

    Eller eller(maze);

    eller.MakeMaze();

}