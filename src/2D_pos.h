/******************************************************************
 * Copyright(C) 2020-2020. All right reserved.
 * 
 * Filename: 2D_pos.h
 * Author: ahaoozhang
 * Date: 2020-01-20 15:10:51 (星期一)
 * Describe: 
 ******************************************************************/
#pragma once
#include <cstdint>
#include <cstdlib>

/// @brief 2D 位置信息 row行 col列
struct Pos {
    public:
        Pos(uint32_t row = 0, uint32_t col = 0): _row(row), _col(col) {}
        Pos(const Pos& pos) {
            _row = pos._row;
            _col = pos._col;
        }
        Pos(const Pos&& pos) {
            _row = pos._row;
            _col = pos._col;
        }
        Pos& operator=(const Pos &pos) {
            _row = pos._row;
            _col = pos._col;
        }

        ~Pos() {}
        const Pos up();
        const Pos down();
        const Pos left();
        const Pos right();

        const size_t row() const { return _row; }
        const size_t col() const { return _col; }


    private:
        size_t _row;
        size_t _col;
};