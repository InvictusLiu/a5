#ifndef _BLOCK_H
#define _BLOCK_H

#include <vector>
#include <string>
#include <memory>

struct Coordinate{
	int row;
	int col;
	std::string sym; // "-" if not occupied
};


class Block{
	int level = 0; // level of block
	bool heavy = false; // indicate heavy block

	protected:
	int size;
	std::vector<Coordinate> coord;
	std::string sym;

	public:
	// ctor
	Block(int level);

	// copy ctor
	Block(const Block &other);
	virtual std::shared_ptr<Block> clone() = 0;

	// copy assignment
	virtual Block &operator=(const Block &other);

	// dtor
	virtual ~Block();
	// Block(Block &&other);
	// Block &operator=(Block &&other);
	
	// operation
	void left();
	void right();
	void down();
	void Clockwise();
	void counterClockwise();

	// information aquisition
	std::vector<Coordinate> getCoord();
	std::string getSym();
	bool Used(int r, int c);
	int getLevel();
	bool isHeavy();
	void setHeavy();
	void unsetHeavy();
};

#endif
