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
        void echo();//打印函数
        int Game();//游戏主体函数
        int IsDown();//判断游戏是否失败
        int IsFull();
        void Seed();//播撒种子
        void MoveMap();//移动游戏元素
        void MovePointW();
        void MovePointS();
        void MovePointA();
        void MovePointD();
        void CountFuncW();
        void CountFuncA();
        void CountFuncS();
        void CountFuncD();
        bool IsSeedW();
        bool IsSeedS();
        bool IsSeedA();
        bool IsSeedD();
        void icon();
        bool IsSeed(const char point);
        bool is_outof_range(const Pos& pos);

    private:
        enum IS_SEED { SEED, NOT_SEED } _SEED;
        std::vector<std::vector<int>>   _map;
};


