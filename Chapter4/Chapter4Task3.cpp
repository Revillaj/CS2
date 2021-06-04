// Min and Jose
// 4/20/2021
// Chapter4 Task3
// Student demonstrate the use of global constants/variables

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

long double pi = 3.1415926535;
double areaOfCircle(double);
double VolumeOfSphere(double);

int main()
{
double rds;
cout << "Enter a radius: " << endl;
cin >> rds;
cout << areaOfCircle(rds) << endl;
cout << VolumeOfSphere(rds) << endl;

return(0);
}

double areaOfCircle(double num1)
{
return pi * pow(num1 ,2);
}

double VolumeOfSphere(double num1)
{
return (4 * pi * pow(num1,3))/3;
}