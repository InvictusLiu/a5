#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include <fstream>
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


Level0::Level0（string seq):seq{seq}{}

Level0::getLevel(){
	return 0;
}

std::shared_ptr<Block> createBlock(){
	ifstream input(seq);
	while(input >> seq){
		words.emplace_back(seq);
	}

	//test
	/*
	for(int i = 0; i < words.size(); ++i){
		cout << words.at(i) << endl;
	}
	*/

	for (int i = 0; i < words.size(); ++i){
		string c = words.at(i);
		if (c == "I"){
			return make_shared<IBlock>(0);
		}
		else if (c == "J"){
			return make_shared<JBlock>(0);
		}
		else if (c == "L"){
			return make_shared<LBlock>(0);
		}
		else if (c == "T"){
			return make_shared<TBlock>(0);
		}
		else if (c == "O"){
			return make_shared<OBlock>(0);
		}
		else if (c == "Z"){
			return make_shared<ZBlock>(0);
		}
		else if (c == "S"){
			return make_shared<SBlock>(0);
		}
		else{
			throw invalid_argument(string c);
		}
	}
}

Level0::~Level0(){}


















