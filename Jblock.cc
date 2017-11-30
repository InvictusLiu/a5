#include "Jblock.h"
#include <vector>
void JBlock::left(){
	for(auto &c : coord) {
		c.col--;
	}
}

void JBlock::right(){
        for(auto &c : coord) {
		c.col++;
	}
}

void JBlock::down(){
        for(auto &c : coord) {
		c.row--;
	}
}

void JBlock::counterClockwise(){
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

void JBlock::Clockwise(){
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

vector<coordinate> JBlock::getPosition(){
	return coord;
}

