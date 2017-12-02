#include "level3.h"
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

Level3::Level3(int lvl, int seed):level{lvl},seed{seed}{}

Level3::int getLevel(){
	return lvl;
}

Level3::shared_ptr<Block> createBlock(){
	srand(seed);
	int r = srand() % 9;
	if ((r == 0)&&(r == 1)){
		return make_shared<SBlock>(lvl);

	}
	else if ((r == 2)&&(r == 3)){
		return make_shared<ZBlock>(lvl);
	}
	else if (r == 4) {
		return make_shared<JBlock>(lvl);
	}
	else if (r == 5) {
		return make_shared<LBlock>(lvl);
	}
	else if (r == 6) {
		return make_shared<OBlock>(lvl);
	}
	else if (r == 7) {
		return make_shared<TBlock>(lvl);
	}
	else {
		return make_shared<IBlock>(lvl);
	}
}

Level3::~Level(){}

