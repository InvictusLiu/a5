#ifndef _JBLOCK_H
#define _JBLOCK_H

#include <memory>
#include "block.h"

class JBlock: public Block {
	public:
		// ctor
		JBlock(int level);

		// copy ctor
		JBlock(const JBlock &other);
		std::shared_ptr<Block> clone() override;

		// copy assignment
		JBlock &operator=(const Block &other) override;

		// dtor
		~JBlock();
};

#endif
