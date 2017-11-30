#include "Jblock.h"
#include <vector>

JBlock::JBlock(int row, int col, std::string sym, int level):Block{row, col, sym, level}

int JBlock::getLevel(){
	return level;
}

