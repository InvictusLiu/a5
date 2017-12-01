#include "block.h"
#include <vector>

Block::~Block(){}

//copy ctor
Block::Block(const Block &other){
	this->side = other.side;
	for (unsigned int i = 0; i < other.coord.size(); i++){
		this->coord.emplace_back(coord[i]);
	}
}

//copy assign
Block &Block::operator=(const Block &other){
	
}

void Block::left(){
	for(auto &c : coord) {
		c.col--;
	}
}

void Block::right(){
        for(auto &c : coord) {
		c.col++;
	}
}

void Block::down(){
        for(auto &c : coord) {
		c.row--;
	}
}

void Block::counterClockwise(){
	vector<Coordinate> oldCoord;
	for(auto &c : coord) {
		oldCoord.emplace_back(c);
	}
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			coord[i*size+j] = oldCoord[size*j+size-i-1];
		}
	}
}

void Block::Clockwise(){
	vector<Coordinate> oldCoord;
	for(auto &c : coord) {
		oldCoord.emplace_back(c);
	}
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			coord[i*size+j] = oldCoord[size*(size-j-1)+i];
		}
	}
}

vector<coordinate> Block::getCoord(){
	return coord;
}


int Block::getLevel(){
	return level;
}

bool Block::Used(int r, int c) {
	for (auto c : coord) {
		if (c.row == r && c.col == c && c.sym != "-") {
			return true;
		}
	}
return false;
}
