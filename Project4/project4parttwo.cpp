// Alex & Jose 
// 6/1/2021
// Project 4
// read from/write to a filecreate input and output stream objects

#include <iostream>
#include <fstream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	ifstream instream;
	ofstream outstream;

	instream.open("input2.txt");
	outstream.open("output2.txt");

	if(instream.fail())
	{
		cout << "This file cannot be opened. \n";
		exit(1);
	}

	if(outstream.fail())
	{
		cout << "This file cannot be opened. \n";
		exit(1);
	}

	//cout << setw(5) << "x" << setw(7) << "x^2" << setw(15) << "Current Sum" << endl;
	//cout << setw(6) << "===" << setw(6) << "===" << setw(16) << "============="  << endl;

	int number;
	int sum =0, count=0;

	/*while(instream >> number)
	{
		sum += number;
		cout << setw(5) << number << setw(6) << pow(number,2) << setw(10) << sum << endl;
		count++;
	}*/

	//cout << endl;
	//cout << "The average of this " << count << " numbers is: " << sum/count;

	outstream << setw(5) << "x" << setw(7) << "x^2" << setw(15) << "Current Sum" << endl;
	outstream << setw(6) << "===" << setw(6) << "===" << setw(16) << "============="  << endl;

	while(instream >> number)
	{
		sum += number;
		outstream << setw(5) << number << setw(6) << pow(number,2) << setw(10) << sum << endl;
		count++;
	}
	outstream << endl;
	outstream << "The average of this " << count << " numbers is: " << sum/count;

	instream.close();
	outstream.close();

	return 0;
}
