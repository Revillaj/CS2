// Min and Jose
// 4/20/2021
// Chapter4 Task5
// Students will be demonstrating the use of overloaded functions.

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int ave(int, int);
int ave (int, int, int);

int main()
{
int num1, num2, num3;
cout << "Input 3 numbers: ";
cin >>  num1 >> num2 >> num3;
cout << ave(num1, num2) << endl;
cout << ave(num1, num2, num3) << endl;
return(0);
}

int ave(int num1, int num2)
{
return (num1 + num2)/2;
}

int ave(int num1, int num2, int num3)
{
return (num1 + num2 + num3)/3;
}