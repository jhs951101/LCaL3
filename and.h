#include "defaultgate.h"
#include "not.h"

#pragma once

class gate_AND : public gate_NAND
{
public:
	gate_AND(void);
	~gate_AND(void);

	virtual void gateOperation();
};