#ifndef ZOO_H
#define ZOO_H
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class Zoo
{
private:
    int QuantityVisiters;
    char Name[100];
    int QuantityAnimals;
public:
    int a;
    char b[100];
    void Enter_Name();
    void Enter_QuantityVisiters();
    void Enter_QuantityAnimals();
    void Out_Name();
    void Out_QuantityVisiters();
    void Out_QuantityAnimals();
    void Input_a(){printf("enter a(int): ");scanf("%d",&a);printf("\n");}
    void Input_b(){printf("enter b(string): ");scanf("%s",&b);printf("\n");}
    void Input_c(){printf("enter c(protected): ");scanf("%d",&c);printf("\n");}
    void Input_d(){printf("enter d(protected): ");scanf("%d",&d);printf("\n");}
    void out_a(){printf("a=%d\n",a);}
    void out_b(){printf("b=%s\n",b);}
    void out_c(){printf("c=%d\n",c);}
    void out_d(){printf("d=%d\n",d);}
    int get_a(){return a;}
    char* get_b(){return b;}
    int get_c(){return c;}
    int get_d(){return d;}
    int get_QuantityVisiters(){return QuantityVisiters;}
    char* get_Name(){return Name;}
    int get_QuantityAnimals(){return QuantityAnimals;}
    Zoo(){
    Enter_Name();
    Enter_QuantityVisiters();
    Enter_QuantityAnimals();
    Input_a();
    Input_b();
    Input_c();
    Input_d();
}
    ~Zoo(){
        printf("\n All Deleted");
    }
protected:
    int c;
    int d;
};


#endif // ZOO_H
