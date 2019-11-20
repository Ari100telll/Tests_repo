#include "Zoo.h"
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
void Zoo::Enter_QuantityVisiters()
{
    printf("How many Visiters: ");
    scanf("%d",&QuantityVisiters);
    printf("\n");
}
void Zoo::Out_QuantityVisiters()
{
   printf("Visiters = %d\n",QuantityVisiters);
}
void Zoo::Enter_QuantityAnimals()
{
    printf("How many animals: ");
    scanf("%d",&QuantityAnimals);
    printf("\n");
}
void Zoo::Out_QuantityAnimals()
{
   printf("animals = %d\n",QuantityAnimals);
}
void Zoo::Enter_Name()
{
   printf("Enter the Name: ");
   scanf("%[^\n]s",Name);
   printf("\n");
}
void Zoo::Out_Name()
{
   printf("Name = ");
   printf("%s",Name);
   printf("\n");
}
