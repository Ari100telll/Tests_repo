#include "ArrayColumn.h"
#include <iostream>
#define quantityOfColumns 5
#define quantityOfElementsInColumn 5
using namespace std;
void MergeSort(int* temporarColumn1, int* temporarColumn2, int leftLimitOfMerge, int rightLimitOfMerge) {
	int middleElement = (leftLimitOfMerge + rightLimitOfMerge) / 2;
	if (leftLimitOfMerge != rightLimitOfMerge) {
		MergeSort(temporarColumn1, temporarColumn2, leftLimitOfMerge, middleElement);
		MergeSort(temporarColumn1, temporarColumn2, middleElement + 1, rightLimitOfMerge);
		int leftIterator = leftLimitOfMerge;
		int pushBackIterator = leftLimitOfMerge;
		int rightIterator = middleElement + 1;
		while (leftIterator < middleElement + 1 && rightIterator < rightLimitOfMerge + 1) {
			if (temporarColumn1[leftIterator] <= temporarColumn1[rightIterator]) {
				temporarColumn2[pushBackIterator] = temporarColumn1[rightIterator];
				pushBackIterator++;
				rightIterator++;
			}
			else if (temporarColumn1[rightIterator] < temporarColumn1[leftIterator]) {
				temporarColumn2[pushBackIterator] = temporarColumn1[leftIterator];
				pushBackIterator++;
				leftIterator++;
			}
		}
		if (leftIterator < middleElement + 1) {
			while (leftIterator != middleElement + 1) {
				temporarColumn2[pushBackIterator] = temporarColumn1[leftIterator];
				leftIterator++;
				pushBackIterator++;
			}
		}
		else if (rightIterator < rightLimitOfMerge + 1) {
			while (rightIterator != rightLimitOfMerge + 1) {
				temporarColumn2[pushBackIterator] = temporarColumn1[rightIterator];
				rightIterator++;
				pushBackIterator++;
			}
		}
		for (int numberOfElement = 0; numberOfElement <= rightLimitOfMerge; numberOfElement++) {
			temporarColumn1[numberOfElement] = temporarColumn2[numberOfElement];
		}
	}
}

arrayColumn::~arrayColumn()
{
	//dtor
}

void inputColumns(arrayColumn columns[quantityOfColumns]) {
	for (int numberOfColumn = 0; numberOfColumn < quantityOfColumns; numberOfColumn++) {
		for (int numberOfElement = 0; numberOfElement < quantityOfElementsInColumn; numberOfElement++) {
			cin >> columns[numberOfColumn].elementsOfColumn[numberOfElement];
		}
	}
}

void sortArrayColumnMergeBescending(arrayColumn columns[quantityOfColumns]) {
	int  temporarColumn1[quantityOfElementsInColumn];
	int  temporarColumn2[quantityOfElementsInColumn];
	for (int numberOfColumn = 0; numberOfColumn < quantityOfColumns; numberOfColumn++) {
		for (int numberOfElement = 0; numberOfElement < quantityOfElementsInColumn; numberOfElement++) {
			temporarColumn1[numberOfElement] = columns[numberOfColumn].elementsOfColumn[numberOfElement];
		}
		MergeSort(temporarColumn1, temporarColumn2, 0, quantityOfElementsInColumn - 1);
		for (int numberOfElement = 0; numberOfElement < quantityOfElementsInColumn; numberOfElement++) {
			columns[numberOfColumn].elementsOfColumn[numberOfElement] = temporarColumn1[numberOfElement];
		}

	}
}

void functionCountingAndOutput(arrayColumn columns[quantityOfColumns]) {
	int sumOfMaxElementsInRow = 0;
	for (int numberOfElement = 0; numberOfElement < quantityOfElementsInColumn; numberOfElement++) {
		int maxElementInRow = columns[0].elementsOfColumn[numberOfElement];
		for (int numberOfColumn = 0; numberOfColumn < quantityOfColumns; numberOfColumn++) {
			if (maxElementInRow < columns[numberOfColumn].elementsOfColumn[numberOfElement]) { maxElementInRow = columns[numberOfColumn].elementsOfColumn[numberOfElement]; }
		}
		sumOfMaxElementsInRow += maxElementInRow;
		cout << "Max Element In Row " << numberOfElement + 1 << " = " << maxElementInRow << "\n";
	}
	cout << "\nSum Of Max Elements In Row = " << sumOfMaxElementsInRow << "\n";
}


