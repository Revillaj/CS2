// Alex & Jose 
// 6/1/2021
// Project 4
// read from/write to a filecreate input and output stream objects

#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

int main()
{
    fstream inStream;
    int count(0);
    double sum(0), avarage(0), next;

    cout << " x" << "     " << "x^2" << "   " << "Current Sum" << endl;
    cout << "===" << "    " << "===" << "   " << "=============" << endl;
    inStream.open("input.txt");
    while (! inStream.eof())
    {
        inStream >> next;
        cout << " " << next << "     ";
        cout << next * next << "     ";
        sum = sum + next;
        cout << sum << endl;
        count ++;
    }
    avarage = sum / count;

    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

    cout << "The avarage of these " << count << " numbers is " << avarage << endl;
    
    inStream.close();

    return(0);
}
