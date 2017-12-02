#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "zblock.h"

using namespace std;

// ctor
ZBlock::ZBlock(int level): Block{level} {
	size = 3;

	coord.emplace_back(Coordinate{3, 0, "-"});
	coord.emplace_back(Coordinate{3, 1, "-"});
	coord.emplace_back(Coordinate{3, 2, "-"});
	coord.emplace_back(Coordinate{4, 0, "z"});
	coord.emplace_back(Coordinate{4, 1, "z"});
	coord.emplace_back(Coordinate{4, 2, "-"});
	coord.emplace_back(Coordinate{5, 0, "-"});
	coord.emplace_back(Coordinate{5, 1, "z"});
	coord.emplace_back(Coordinate{5, 2, "z"});

	sym = "z";

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
ZBlock::ZBlock(const ZBlock &other): Block{other} {}

shared_ptr<Block> ZBlock::clone() {
	return make_shared<ZBlock>(*this);
}


// copy assignment
ZBlock& ZBlock::operator=(const Block &other) {
	Block::operator=(other);
	return *this;
}


// dtor
ZBlock::~ZBlock() {}

