#include <cstdlib>
#include <memory>
#include <iostream>
#include <string>
using namespace std;

#include "level0.h"
#include "block.h"
#include "iblock.h"
#include "tblock.h"
#include "zblock.h"
#include "sblock.h"
#include "oblock.h"
#include "jblock.h"
#include "lblock.h"

Level2::Level2(int lvl, int seed = 0): lvl{lvl}, seed{seed}{}

int Level2::getlevel() {
	return lvl;
}

std::shared_ptr<Block> createBlock() {
	srand(seed);
	int r = rand()%7;
	if (r == 0){
		return make_shared<IBlock>(lvl);
	}
	else if (r == 1){
		return make_shared<JBlock>(lvl);
	}
	else if (r == 2){
		return make_shared<LBlock>(lvl);
	}
	else if (r == 3){
		return make_shared<TBlock>(lvl);
	}
	else if (r == 4){
		return make_shared<OBlock>(lvl);
	}
	else if (r == 5){
		return make_shared<ZBlock>(lvl);
	} 
	else { //r == 6
		return make_shared<SBlock>(lvl);
	}
}

Level2::~Level2(){}

















