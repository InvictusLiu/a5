#include "level1.h"
#include "block.h"
#include "tblock.h"
#include "iblock.h"
#include "jblock.h"
#include "lblock.h"
#include "oblock.h"
#include "zblock.h"
#include "sblock.h"
#include <vector>
#include <string>
#include <memory>
#include <iostream>
using namespace std;

Level1::Level1(int seed):level{1},seed{seed}{}

Level1::int getLevel(){
	return lvl;
}

Level1::shared_ptr<Block> createBlock(){
	srand(seed);
	int r = srand() % 12;
	if (r == 0){
		return make_shared<SBlock>(lvl);

	}
	else if (r == 1){
		return make_shared<ZBlock>(lvl);
	}
	else if ((r == 2)&&(r == 3)) {
		return make_shared<JBlock>(lvl);
	}
	else if ((r == 4)&&(r == 5)) {
		return make_shared<LBlock>(lvl);
	}
	else if ((r == 6)&&(r == 7)) {
		return make_shared<OBlock>(lvl);
	}
	else if ((r == 8)&&(r == 9)) {
		return make_shared<TBlock>(lvl);
	}
	else {
		return make_shared<IBlock>(lvl);
	}
}	

Level1::~Level(){}
