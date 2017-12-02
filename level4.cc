#include "level4.h"
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
ing namespace std;

Level4::Level4(int seed):level{4},seed{seed}{}

Level4::int getLevel(){
	return lvl;
}

Level4::shared_ptr<Block> createBlock(){
	srand(seed);
	int r = srand() % 9;
	if ((r == 0)||(r == 1)){
		return make_shared<SBlock>(4);

	}
	else if ((r == 2)||(r == 3)){
		return make_shared<ZBlock>(4);
	}
	else if (r == 4) {
		return make_shared<JBlock>(4);
	}
	else if (r == 5) {
		return make_shared<LBlock>(4);
	}
	else if (r == 6) {
		return make_shared<OBlock>(4);
	}
	else if (r == 7) {
		return make_shared<TBlock>(4);
	}
	else {
		return make_shared<IBlock>(4);
	}
}

Level4::~Level(){}


