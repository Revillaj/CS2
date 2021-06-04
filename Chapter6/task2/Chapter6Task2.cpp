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
    
    inStream.open("infile.txt");
    outStream.open("outfile.txt");

    int first, second, third;

    inStream >> first >> second >> third;
    cout << first << " " << second << " "<< third << " " << endl;

    outStream << "the sum of the numbers is infile.txt is " << (first + second + third) << endl;

    inStream.close();
    outStream.close();
}
