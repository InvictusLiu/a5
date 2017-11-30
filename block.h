#ifndef _BLOCK_H
#define _BLOCK_H

struct Coordinate{
	int row;
	int col;
	std::string sym; // "-" if not occupied
	int level;
}

class Block{
	std::vector<Coordinate> coord; //size of coord is side*side
	int side; //side length of block
	public:
	~Block();
	Block(const Block &other);
	Block &operator=(const Block &other);
	Block(Block &&other);
	Block &operator=(Block &&other);
	
	void left();
	void right();
	void down();
	void counterClockwise();
	void Clockwise();
	vector<coordinate> getCoord();
	virtual std::string getSym() = 0;
	bool Used(int r, int c);
}
#endif
