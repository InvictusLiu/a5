#ifndef _OBLOCK_H
#define _OBLOCK_H

#include <memory>
#include "block.h"

class OBlock: public Block{
	public:
	// ctor
	OBlock(int level);

	// copy ctor
	OBlock(const OBlock &other);
	std::shared_ptr<Block> clone() override;

	// copy assignment
	OBlock &operator=(const Block &other) override;

	// dtor
	~OBlock();