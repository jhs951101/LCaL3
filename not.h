#pragma once
#include"nand.h"

class gate_NOT : public gate_NAND
{
public:
	gate_NOT(void);
	~gate_NOT(void);

	virtual void gateOperation();
	void setInput(int x);
};