#pragma once

#include <cstdio>
#include <ctime>
#include <unistd.h>
#include <termios.h>
#include <vector>
#include <cstdint>
#include <cstdlib>

#include "2D_pos.h"

class Game_2048{
    public:
        Game_2048() {}
        ~Game_2048() {}

        bool init(const size_t row, const size_t col);
        bool run();//游戏主体函数
        bool is_outof_range(const Pos& pos);
        int& at(size_t row, size_t col);
        int& at(const Pos& pos);

    private:
        void echo();//打印函数
        bool is_full();
        bool seed();//播撒种子
        void icon();
        bool is_need_seed();
        bool input();
        bool move_map();
        bool range_row();
        bool range_col();

    private:
        enum IS_SEED { SEED, NOT_SEED }                     _NEED_SEED;
        enum DIRECT {UP, DOWN, LEFT, RIGHT, UNKNOWN}        _DIRECT;
        std::vector<std::vector<int>>                       _map;
};


