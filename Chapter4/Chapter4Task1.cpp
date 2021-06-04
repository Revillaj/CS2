// Min and Jose
// 4/5/2021
// Chapter4 Task1
// Three math equation to implement in c++

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    double long x,y,a,b,c;
    
    cout << "Enter 5 intigers :"<< endl;
    cin >> x >> y >> a >> b >> c;
    cout << sqrt(x+y) << endl
       << (-b + sqrt(pow(b,2) - 4 * a * c)) / (2 * a) << endl
       << pow(x,y + 7.0) << endl
        << static_cast<double>(11)/2 << endl;
// Previously: << (11)/2 << endl;
           
}