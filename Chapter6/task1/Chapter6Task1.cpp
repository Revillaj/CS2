/*  Jose Revilla
    May 24 2021
    Initiate output stream
    declare two integer variables, oneNumber and anotherNumber. Intialize them with values 10, 20. */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inStream;
    ofstream outStream;
    int num1(10), num2(20);

    outStream.open("chapter6task1.txt");
    outStream << "the first number is " << num1 << endl;
    outStream << "the second number is " << num2 << endl;
    outStream.close();
}
