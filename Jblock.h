#ifndef _JBLOCK_H
#define _JBLOCK_H
#include "block.h"


class JBlock : public Block{
	public:
	JBlock(int row, int col, std::string sym, int level);
	~JBlock();
	JBlock(const JBlock &other);
	JBlock &operator=(const JBlock &other);
	JBlock(JBlock &&other);
	JBlock &operator=(JBlock &&other);
	
	std::string getSym() override;
}

#endif
