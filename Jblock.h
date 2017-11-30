#ifndef _JBLOCK_H
#define _JBLOCK_H
#include "block.h"


class JBlock : public Block{
	public:
	JBlock(int row, int col, std::string sym, int level);
	std::string getSym() override;
}
