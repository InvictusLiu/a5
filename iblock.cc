#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "iblock.h"
using namespace std;

//ctor
IBlock::IBlock(int level): Block{level}{
	size = 4;

	coord.emplace_back(Coordinate{3, 0, "-"});
	coord.emplace_back(Coordinate{3, 1, "-"});
	coord.emplace_back(Coordinate{3, 2, "-"});
	coord.emplace_back(Coordinate{3, 3, "-"});
	coord.emplace_back(Coordinate{4, 0, "-"});
	coord.emplace_back(Coordinate{4, 1, "-"});
	coord.emplace_back(Coordinate{4, 2, "-"});
	coord.emplace_back(Coordinate{4, 3, "-"});
	coord.emplace_back(Coordinate{5, 0, "I"});
	coord.emplace_back(Coordinate{5, 1, "I"});
	coord.emplace_back(Coordinate{5, 2, "I"});
	coord.emplace_back(Coordinate{5, 3, "I"});

	sym = "i";

}

// copy ctor
IBlock::IBlock(const IBlock &other):Block{other}{}

shared_ptr<Block> IBlock::clone(){
	return make_shared<IBlock>(*this);
}


//copy assignment
IBlock &IBlock::operator=(const Block &other){
	Block::operator=(other);
	return *this;
}


//dtor
IBlock::~IBlock(){}





















