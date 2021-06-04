// Jose & Min 
// 04-26-2021
// Comparing Argument Mechanisms
// Write a program with two functions, main() and doStuff() In this program, you should demonstrate the use of call by value and call by reference in the same function.

#include <iostream>
using namespace std;

void doStuff(int par1Value, int& par2Ref);

int main()
{
    int n1 = 1, n2 = 2;
    doStuff(n1, n2);
    cout << "n1 after function call = " << n1 << endl
    << "n2 after function call = " << n2 << endl;
    return(0);
}
void doStuff(int par1Value, int& par2Ref)
{
    //precondition: type int and varaible have to be passed to the funciton
    //postcondition: will print out Value of par1 & par2 in the function 
    par1Value = 111;
    cout << "par1Value in function call = " << par1Value << endl;
    par2Ref = 222;
    cout << "par2Ref in function call = " << par2Ref << endl;
}