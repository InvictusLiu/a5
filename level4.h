#ifndef _LEVEL4_H
#define _LEVEL4_H

#include <memory>
#include "level.h"

class Level4: public Level{
	int seed = 0;

	public:
	Level4(int lvl, int seed);
	int getLevel() override;
	std::shared_ptr<Block> createBlock() override;
	~Level4();
};

#endif

