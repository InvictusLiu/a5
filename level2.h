#ifndef _LEVEL2_H
#define _LEVEL2_H

#include <memory>
#include "level.h"

class Level2: public Level{
	unsigned int seed;

public:
	Level2(int lvl, int seed = 0);
	int getlevel() override;
	std::shared_ptr<Block> createBlock() override;
	~Level2();
};

#endif 
