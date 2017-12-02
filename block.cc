#include <iostream>
#include <vector>
#include <string>
#include "block.h"

using namespace std;

// ctor
Block::Block(int level): level{level} {
	if (level == 3 || level == 4) {
		heavy = true;
	}
	else {
		heavy = false;
	}
}


// copy ctor
Block::Block(const Block &other): level{other.level}, heavy{other.heavy}, size{size},
	coord{other.coord}, sym{sym} {}


// copy assignment
Block& Block::operator=(const Block &other) {
	if (this != &other) {
		level = other.level;
		heavy = other.heavy;
		size = other.size;
		coord = other.coord;
		sym = other.sym;
	}
	return *this;
}


// dtor
Block::~Block() {}


// operation
void Block::left() {
	for(auto &c : coord) {
		c.col--;
	}
}

void Block::right() {
	for(auto &c : coord) {
		c.col++;
	}
}

void Block::down() {
	for(auto &c : coord) {
		c.row++;
	}
}

void Block::Clockwise() {
	vector<Coordinate> oldCoord = coord;

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			coord[i*size+j].sym = oldCoord[size*(size-j-1)+i].sym;
		}
	}

	// test
	for(int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (coord[i*size+j].sym == "-") {
				cout << " ";
			}
			else {
				cout << coord[i*size+j].sym;
			}
		}
		cout << endl;
	}
}

void Block::counterClockwise(){
	for(int i = 0; i < 3; i++) {
		Clockwise();
	}

	// test
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if (coord[i*size+j].sym == "-") {
				cout << " ";
			}
			else {
				cout << coord[i*size+j].sym;
			}
		}
		cout << endl;
	}
}


// information aquisition
vector<Coordinate> Block::getCoord() {
	return coord;
}

string Block::getSym() {
	return sym;
}

bool Block::Used(int r, int c) {
	for(auto i : coord) {
		if ((i.row == r) && (i.col == c) && (i.sym != "-")) {
			return true;
		}
	}

	return false;
}

int Block::getLevel() {
	return level;
}

bool Block::isHeavy() {
	return heavy;
}

void Block::setHeavy() {
	heavy = true;
}

void Block::unsetHeavy() {
	heavy = false;
}

