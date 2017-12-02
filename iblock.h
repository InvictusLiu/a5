#ifndef _IBLOCK_H
#define _IBLOCK_H

#include <memory>
#include "block.h"

class IBlock: public Block{
	public:
		//ctor
		IBlock(int level);

		//copy ctor
		IBlock(const IBlock &other);
		std::shared_ptr<Block> clone() override;

		//copy assignment
		IBlock &operator=(const Block &other) override;

		//dtor
		~IBlock();


};

#endif
