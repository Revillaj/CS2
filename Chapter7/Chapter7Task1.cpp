// Jose & Sagar
//5/4/2021
//Task 1 Dimensional Arrays
//Populate a 1-D array called “numbers” with 5 integers. These values will be provided by the user.

#include <iostream>

using namespace std;

int main()
{
    int size[5], max;
    for (int i(0); i < 5 ; i++)
    {
        cout << "Enter number: ";
        cin >> size[i];
    }
    max = size[1];
    for (int i(0); i < 5; i++)
    {
        if (max<size[i])
        {
            max = size[i];
        }
    }
    cout << "You entered: ";
    for (int i(0); i < 5; i++)
    {
        cout << size[i];
        if (i < 4)
        {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "The biggest number you entered is " << max << endl;
    cout << "The difference between the numbers are: " << endl;
    for(int i(0); i<5;i++)
    {
        cout << size[i] << " off by " << max - size[i] << endl;
    }
    cout << "-------------------------------------------------------" << endl << endl
    << "Second Array of Numbers" << endl;
    int scores[5]={78,89,54,99,50}, failed(0);
    for (int i(0); i<5;i++)
    {
        if (scores[i]<60)
        {
            failed++;
        }
    }
    cout << "Here is the list of scores: ";
    for (int i(0); i < 5; i++)
    {
        cout << scores[i];
        if (i < 4)
        {
            cout << ", ";
        }
    }
    cout << endl << "There are " << failed << " failed scores." << endl << endl;
    return(0);
}