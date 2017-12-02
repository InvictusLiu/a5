#ifndef _LBLOCK_H
#define _LBLOCK_H

#include <memory>
#include "block.h"

class LBlock: public Block {
	public:
		// ctor
		LBlock(int level);

		// copy ctor
		LBlock(const LBlock &other);
		std::shared_ptr<Block> clone() override;

		// copy assignment
		LBlock &operator=(const Block &other) override;

		// dtor
		~LBlock();
};

#endif

