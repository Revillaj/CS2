/*  Jose Revilla
    May 26 2021
    Detecting the end of your file
    Write a program that reads these numbers from the file, adds them, and when you have reached the end of the file, calculates the average of these numbers. Print a message and the average to the console.*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream inStream;
    double next, sum(0),count(0), avarage;

    inStream.open("numbers.txt");

    while (inStream >> next)
    {
        sum = sum + next;
        count++;
    }
    inStream.close();
    avarage = sum / count;
    cout << "Your avarage of all the numbers in numbers.txt is " << avarage << endl;
}