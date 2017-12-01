#include "Jblock.h"
#include <vector>

JBlock::JBlock(int row, int col, std::string sym, int level):row{row}, col, sym, level}{}
JBlock(const JBlock &other){
}

int JBlock::getLevel(){
	return level;
}

