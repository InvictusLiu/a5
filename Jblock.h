#ifndef _BLOCK_H
#define _BLOCK_H
#include "block.h"
struct Coordinate{
	unsigned int row;
	unsigned int col;
}

class Block{
	std::vector<Coordinate> coord;
	int position; 
	char blockType;
	bool isHeavy;
	public:
	virtual void left() = 0;
	virtual void right() = 0;


}
