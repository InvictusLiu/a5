#ifndef _LEVEL_H
#define _LEVEL_H
#include <memory>
class Block;

class Level{
	int lvl;

	public:
	Level(int lvl);
	virtual int getLevel()=0;
	virtual std::shared_ptr<Block> createBlock()=0;
	virtual ~Level();
};

#endif
