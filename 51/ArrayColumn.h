#ifndef ARRAYCOLUMN_H
#define ARRAYCOLUMN_H
#include <iostream>
#define quantityOfColumns 5
#define quantityOfElementsInColumn 5

using namespace std;
class arrayColumn
{
public:
	friend void inputColumns(arrayColumn columns[quantityOfColumns]);
	void outputColumns() {
		for (int numberOfElementInColumn = 0; numberOfElementInColumn < quantityOfElementsInColumn; numberOfElementInColumn++) {
			cout << elementsOfColumn[numberOfElementInColumn] << "\t";
		}
	}
	friend void sortArrayColumnMergeBescending(arrayColumn columns[quantityOfColumns]);
	friend void MergeSort(int* temporarColumn1, int* temporarColumn2, int leftLimitOfMerge, int rightLimitOfMerge);
	friend void functionCountingAndOutput(arrayColumn columns[quantityOfColumns]);
	arrayColumn() {
		for (int numberOfElement = 0; numberOfElement < quantityOfElementsInColumn; numberOfElement++) {
			elementsOfColumn[numberOfElement] = 0;
		}
	};
	virtual ~arrayColumn();

protected:

private:
	int elementsOfColumn[quantityOfElementsInColumn];
};
#endif // ARRAYCOLUMN_H
