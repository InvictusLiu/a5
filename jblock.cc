#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include "jblock.h"

using namespace std;

// ctor
JBlock::JBlock(int level): Block{level} {
	size = 3;

	coord.emplace_back(Coordinate{3, 0, "-"});
	coord.emplace_back(Coordinate{3, 1, "-"});
	coord.emplace_back(Coordinate{3, 2, "-"});
	coord.emplace_back(Coordinate{4, 0, "J"});
	coord.emplace_back(Coordinate{4, 1, "-"});
	coord.emplace_back(Coordinate{4, 2, "-"});
	coord.emplace_back(Coordinate{5, 0, "J"});
	coord.emplace_back(Coordinate{5, 1, "J"});
	coord.emplace_back(Coordinate{5, 2, "J"});

	sym = "J";

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
JBlock::JBlock(const JBlock &other): Block{other} {}

shared_ptr<Block> JBlock::clone() {
	return make_shared<JBlock>(*this);
}


// copy assignment
JBlock& JBlock::operator=(const Block &other) {
	Block::operator=(other);
	return *this;
}


// dtor
JBlock::~JBlock() {}
