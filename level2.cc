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

Level2::Level2(int seed = 0):seed{seed}{}

int Level2::getLevel() {
	return 2;
}

std::shared_ptr<Block> createBlock() {
	srand(seed);
	int r = rand()%7;
	if (r == 0){
		return make_shared<IBlock>(2);
	}
	else if (r == 1){
		return make_shared<JBlock>(2);
	}
	else if (r == 2){
		return make_shared<LBlock>(2);
	}
	else if (r == 3){
		return make_shared<TBlock>(2);
	}
	else if (r == 4){
		return make_shared<OBlock>(2);
	}
	else if (r == 5){
		return make_shared<ZBlock>(2);
	} 
	else { //r == 6
		return make_shared<SBlock>(2);
	}
}

Level2::~Level2(){}

















