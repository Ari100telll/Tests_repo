#include "Vector.h"
#include <iostream>
#include <vector.h>
using namespace std;
Vector::Vector()
{
    //ctor
}

void s(int* v,int* w,int l,int r) {
    int m = (l + r)/2;
    if(l!=r){
        s(v,w,l,m);
        s(v,w,m+1,r);
        int i = l;
        int k = l;
        int ii = m+1;
        while(i<m+1 && ii < r+1){
            if(v[i]<=v[ii]){
                w[k]=v[ii];
                k++;
                ii++;
            }
            else if(v[ii]<v[i]){
                w[k]=v[i];
                k++;
                i++;
            }
        }
        if(i<m+1){
            while(i!=m+1){
                w[k]=v[i];
                i++;
                k++;
            }
        }
        else if(ii<r+1){
            while(ii!=r+1){
                w[k]=v[ii];
                ii++;
                k++;
            }
        }
        for(int i = 0; i <= r;i++) {
            v[i] = w[i];
        }
    }
}

Vector::~Vector()
{
    //dtor
}

void InpM(Vector A[]){
    for(int i = 0; i < 5;i++){
        for (int j = 0; j < 5; j++){
            cin >> A[i].A[j];
        }
    }
}

void SortM(Vector A[]){
   int  v[5];
    int  w[5];
    for(int j = 0 ; j<5;j++){
        for(int i = 0 ; i < 5;i++){
            v[i]=A[i].A[j];
        }
        s(v,w,0,4);
        for(int i = 0 ; i < 5;i++){
            A[i].A[j]=v[i];
        }

    }
}

void OutF(Vector A[5]){
    int s=0;
    for(int i = 0 ; i < 5;i++){
            int m=A[i].A[0];
        for(int j =0;j<5;j++){
            if(m<A[i].A[j]){m=A[i].A[j];}
        }
        s+=m;
        cout <<"f"<<i+1<<"="<< m << " ";
    }
    cout << "\nF=" << s << "\n";
}
