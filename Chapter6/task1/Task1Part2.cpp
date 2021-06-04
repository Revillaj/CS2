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
    
    inStream.open("inputfile.txt");
    outStream.open("outfile.txt");

    int first, second;

    inStream >> first >> second;
    cout << first << " " << second << " " << endl;

    outStream << first << " " << second << endl;

    inStream.close();
    outStream.close();
}
