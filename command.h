#ifndef __COMMAND_H__
#define __COMMAND_H__

#include "level.h"
#include "board.h"
#include <memory>

class Command: public Observer{
        int seed = 0;
        string cmd;
        bool hasGraphic;
        int startLevel = 0;
        std::shared_ptr<Level> lvl;
        std::shared_ptr<Observer> td;
        std::shared_ptr<Observer> gd;
        std::shared_ptr<Board> b;
        std::vector<string> cmdCollect{left,right,down,drop,levelup,leveldown,clockwise,counterclockwise,random,norandom,restart,hint,sequence};
        
        public:
        Command(int seed, string seq, bool hasGraphic, int startLevel){};
        interpretCommand(); //notify observers
};

#endif
