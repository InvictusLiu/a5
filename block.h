#ifndef _BLOCK_H
#define _BLOCK_H

struct Coordinate{
	unsigned int row;
	unsigned int col;
}

class Block{
	std::vector<Coordinate> coord;
	int position; //1 is the initial position; counting up if clockwise, vice versa
	char blockType;
	bool isHeavy;
	public:
	virtual void left() = 0;
	virtual void right() = 0;


}
