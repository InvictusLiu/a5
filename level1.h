#ifndef _LEVEL1_H
#define _LEVEL1_H

#include <memory>
#include "level.h"

class Level1: public Level{
	int seed = 0;

	public:
	Level1(int lvl, int seed);
	int getLevel() override;
	std::shared_ptr<Block> createBlock() override;
	~Level1();
};

#endif
