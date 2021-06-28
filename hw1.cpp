#include "nand.h"
#include "and.h"
#include "defaultgate.h"
#include "not.h"
#include "xor.h"
#include "nor.h"

#include <iostream>

using namespace std;


int main(){

	cout << " x " << " y " << " F " << " (Or) " << endl;
	cout << "----------" << endl;

	gate_AND g1;

	g1.setInput(0, 0);
	cout << " 0  0  " << g1.getOutput() << endl;
	g1.setInput(0, 1);
	cout << " 0  1  " << g1.getOutput() << endl;
	g1.setInput(1, 0);
	cout << " 1  0  " << g1.getOutput() << endl;
	g1.setInput(1, 1);
	cout << " 1  1  " << g1.getOutput() << endl;

	//

	cout << endl;
	cout << " x " << " F " << " (Not) " << endl;
	cout << "----------" << endl;

	gate_NOT g2;

	g2.setInput(0);
	cout << " 0  " << g2.getOutput() << endl;
	g2.setInput(1);
	cout << " 1  " << g2.getOutput() << endl;

	return 0;
}