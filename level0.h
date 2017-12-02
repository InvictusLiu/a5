#ifndef _LEVEL0_H
#define _LEVEL0_H

#include <memory>
#include "level.h"

class Level0: public Level{
	std::string seq;
	vector<string> words;

	public:
	Level0(int lvl, std::string seq);
	int getLevel() override;
	std::shared_ptr<Block> createBlock() override;
	~Level0();

};

#endif
