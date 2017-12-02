#ifndef _ZBLOCK_H
#define _ZBLOCK_H

#include <memory>
#include "block.h"

class ZBlock: public Block {
	public:
		// ctor
		ZBlock(int level);

		// copy ctor
		ZBlock(const ZBlock &other);
		std::shared_ptr<Block> clone() override;

		// copy assignment
		ZBlock &operator=(const Block &other) override;

		// dtor
		~ZBlock();
};

#endif

