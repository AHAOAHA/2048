/******************************************************************
 * Copyright(C) 2020-2020. All right reserved.
 * 
 * Filename: 2D_pos.cpp
 * Author: ahaoozhang
 * Date: 2020-01-20 15:11:03 (星期一)
 * Describe: 
 ******************************************************************/
#include "2D_pos.h"

const Pos Pos::up() {
    Pos pos(*this);
    pos._row += 1;

    return pos;
}
const Pos Pos::down() {
    Pos pos(*this);
    pos._row -= 1;

    return pos;

}
const Pos Pos::left() {
    Pos pos(*this);
    pos._col -= 1;

    return pos;

}
const Pos Pos::right() {
    Pos pos(*this);
    pos._col +=1;

    return pos;
}