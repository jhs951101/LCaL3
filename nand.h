#include "nor.h"

#pragma once

class gate_NAND : public gate_NOR
{
public:
	gate_NAND(void);
	~gate_NAND(void);

	virtual void gateOperation();
};