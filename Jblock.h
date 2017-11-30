#ifndef _JBLOCK_H
#define _JBLOCK_H
#include "block.h"
struct Coordinate{
	unsigned int row;
	unsigned int col;
	char sym;
}

class JBlock{
	std::vector<Coordinate> coord;
	int position; 
	char blockType;
	bool isHeavy;
	public:
	virtual void left() = 0;
	virtual void right() = 0;


}
