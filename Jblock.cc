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
	if ((position == 3) && coord[0].row >= 17){ return;}
	if ((position == 2) && coord[0].col >= 10){ return;}
	if ((position == 4) && coord[0].col <= 0){ return;}
	for (unsigned int i =0; i < coord.size(); i++){
		
	}
}

void JBlock::Clockwise(){
	vector<Coordinate> oldCoord;
	for(auto &c : coord) {
		oldCoord.emplace_back(c);
	}
	for (int i = 0; i < size; i++){
		for (int i = 0; i < size; i++){
			coord[i*size+j] = oldCoord[size*(size-j-1)+i];
		}
	}
}

int JBlock::getPosition(){

}

