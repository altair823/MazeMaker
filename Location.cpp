//
// Created by κΉνν on 2021/07/07.
//
#include "Location.h"

Location::Location() {
    openDirection.reset();
    xCoord = 0;
    yCoord = 0;
}

Location::Location(int row, int column) {
    openDirection.reset();
    xCoord = row;
    yCoord = column;
}

void Location::setXCoord(int x) {
    xCoord = x;
}

int Location::getXCoord() const {
    return xCoord;
}

void Location::setYCoord(int y) {
    yCoord = y;
}

int Location::getYCoord() const {
    return yCoord;
}

void Location::setOpenDirection(int direction) {
    openDirection.set(direction);
}

std::bitset<4> Location::getOpenFlag() const {
    return openDirection;
}

void Location::setOpenFlag(std::bitset<4> openFlag) {
    openDirection = openFlag;
}

bool Location::operator==(Location &otherLocation) const {
    if (xCoord == otherLocation.xCoord && yCoord == otherLocation.yCoord){
        return true;
    } else{
        return false;
    }
}


