#include "Jblock.h"
#include <vector>
void JBlock::left(){
	for (unsigned int i =0; i < coord.size(); i++){
		if (coord[i].col ==0){return ;}
	}
	for (unsigned int i =0; i < coord.size(); i++){
        	coord[i].col = coord[i].col - 1;
        }
}

void JBlock::right(){
        for (unsigned int i =0; i < coord.size(); i++){
                if (coord[i].col ==0){return ;}
        }
        for (unsigned int i =0; i < coord.size(); i++){
                coord[i].col = coord[i].col + 1;
        }
}

void JBlock::down(){
        for (unsigned int i =0; i < coord.size(); i++){
                if (coord[i].row == 17){return ;}
        }
        for (unsigned int i =0; i < coord.size(); i++){
                coord[i].row = coord[i].row + 1;
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
	
}

int JBlock::getPosition(){

}

