#ifndef _JBLOCK_H
#define _JBLOCK_H
#include "block.h"


class JBlock : public Block{
	public:
	std::string getSym() override;
}
