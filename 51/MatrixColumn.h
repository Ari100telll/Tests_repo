#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;
class Vector
{
    public:
        friend void InpM(Vector A[5]);
        void OutM(){
        for (int j = 0; j < 5; j++){
            cout << A[j] << "\t";
        }
    }
        friend void SortM(Vector A[5]);
        friend void s(int* v,int* w,int l,int r);
        friend void OutF(Vector A[5]);
        Vector();
        virtual ~Vector();

    protected:

    private:
        int A[5];
};
#endif // VECTOR_H
