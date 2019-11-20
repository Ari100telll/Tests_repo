#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector a[5];
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
