#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "lblock.h"

using namespace std;

// ctor
LBlock::LBlock(int level): Block{level} {
	size = 3;

	coord.emplace_back(Coordinate{3, 0, "-"});
	coord.emplace_back(Coordinate{3, 1, "-"});
	coord.emplace_back(Coordinate{3, 2, "-"});
	coord.emplace_back(Coordinate{4, 0, "-"});
	coord.emplace_back(Coordinate{4, 1, "-"});
	coord.emplace_back(Coordinate{4, 2, "l"});
	coord.emplace_back(Coordinate{5, 0, "l"});
	coord.emplace_back(Coordinate{5, 1, "l"});
	coord.emplace_back(Coordinate{5, 2, "l"});

	sym = "l";

	// test
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(coord[i*size+j].sym == "-") {
				cout << " ";
			}
			else {
				cout << coord[i*size+j].sym;
			}
		}
		cout << endl;
	}
}

// copy ctor
LBlock::LBlock(const LBlock &other): Block{other} {}

shared_ptr<Block> LBlock::clone() {
	return make_shared<LBlock>(*this);
}


// copy assignment
LBlock& LBlock::operator=(const Block &other) {
	Block::operator=(other);
	return *this;
}


// dtor
LBlock::~LBlock() {}


