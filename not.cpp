#include "not.h"

gate_NOT::gate_NOT(void)
{
	setInput(0);
}

gate_NOT::~gate_NOT(void)
{
	
}

void gate_NOT::gateOperation(){


	gate_NAND::gateOperation();

}
void gate_NOT::setInput(int x){

	inputX=x;
	inputY=1;

	gateOperation();

}