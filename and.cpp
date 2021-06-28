#include "and.h"

gate_AND::gate_AND(void)
{
	setInput(0, 0);
}

gate_AND::~gate_AND(void)
{
	
}

void gate_AND::gateOperation(void)
{
	unsigned short t;

	gate_NOR::gateOperation();

	t = getOutput();

	inputX = t;
	inputY = 1;

	gate_NAND::gateOperation();
}