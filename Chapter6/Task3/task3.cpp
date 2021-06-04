/*  Jose Revilla
    May 26 2021
    Appending data to an existing output file
     create an output file data.txt (same way you would with an input file) and write two lines of data in it. */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Opening data.txt for appending. \n";

    ofstream outStream;
    outStream.open("data.txt", ios::app);
    
    if(outStream.fail())
    {
        cout << "input file does not exist" << endl;
        exit(1);
    }
    outStream << endl <<  "5 6 pick up sticks" << endl
        << "7 8 aint C++ great?";
    outStream.close();
    cout << "Done appending files" << endl;

    return(0);
}
