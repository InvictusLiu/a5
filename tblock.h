#ifndef _TBLOCK_H
#define _TBLOCK_H

#include <memory>
#include "block.h"

class TBlock: public Block {
	public:
		// ctor
		TBlock(int level);

		// copy ctor
		TBlock(const TBlock &other);
		std::shared_ptr<Block> clone() override;

		// copy assignment
		TBlock &operator=(const Block &other) override;

		// dtor
		~TBlock();
};

#endif

