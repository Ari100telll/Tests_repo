#include <iostream>
#include "MatrixColumn.h"
#define NumberOfColumns 5
using namespace std;

int main()
{
    MatrixColumn Matrix5x5[NumberOfColumns];
    InpM(a);
    SortM(a);
    cout << "\n";
    for(int i = 0;  i< 5;i++){
        a[i].OutM();
        cout << "\n";
    }
    OutF(a);

    return 0;
}
