#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "tblock.h"

using namespace std;

// ctor
TBlock::TBlock(int level): Block{level} {
	size = 3;

	coord.emplace_back(Coordinate{3, 0, "-"});
	coord.emplace_back(Coordinate{3, 1, "-"});
	coord.emplace_back(Coordinate{3, 2, "-"});
	coord.emplace_back(Coordinate{4, 0, "t"});
	coord.emplace_back(Coordinate{4, 1, "t"});
	coord.emplace_back(Coordinate{4, 2, "t"});
	coord.emplace_back(Coordinate{5, 0, "-"});
	coord.emplace_back(Coordinate{5, 1, "t"});
	coord.emplace_back(Coordinate{5, 2, "-"});

	sym = "t";

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
TBlock::TBlock(const TBlock &other): Block{other} {}

shared_ptr<Block> TBlock::clone() {
	return make_shared<TBlock>(*this);
}


// copy assignment
TBlock& TBlock::operator=(const Block &other) {
	Block::operator=(other);
	return *this;
}


// dtor
TBlock::~TBlock() {}

