#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "oblock.h"
using namespace std;

//ctor
OBlock::OBlock(int level): Block{level}{
	size = 2;

	coord.emplace_back(Coordinate{3, 0, "O"});
	coord.emplace_back(Coordinate{3, 1, "O"});
	coord.emplace_back(Coordinate{4, 0, "O"});
	coord.emplace_back(Coordinate{4, 1, "O"});

	sym = "O";
}

//copy ctor
OBlock::OBlock(const OBlock &other): Block{other}{}

shared_ptr<Block> OBlock::clone() {
	return make_shared<OBlock>(*this);
}


// copy assignment
OBlock& OBlock::operator=(const Block &other) {
	Block::operator=(other);
	return *this;
}


// dtor
OBlock::~OBlock() {}