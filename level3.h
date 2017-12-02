#ifndef _LEVEL3_H
#define _LEVEL3_H

#include <memory>
#include "level.h"

class Level3: public Level{
	int seed = 0;

	public:
	Level3(int lvl, int seed);
	int getLevel() override;
	std::shared_ptr<Block> createBlock() override;
	~Level3();
};

#endif

