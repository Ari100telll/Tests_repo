#include <iostream>
#include "ArrayColumn.h"
#define quantityOfColumns 5
using namespace std;

int main()
{
	arrayColumn columns[quantityOfColumns];
	inputColumns(columns);
	sortArrayColumnMergeBescending(columns);
	cout << "\n";
	for (int numberOfColumn = 0; numberOfColumn < quantityOfColumns; numberOfColumn++) {
		columns[numberOfColumn].outputColumns();
		cout << "\n";
	}
	functionCountingAndOutput(columns);

	return 0;
}
