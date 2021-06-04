// Jose and Sagar 
// 5/6/2021
// Task #3: Arrays and Functions - Part 2
// you will sum up the total of all the numbers in the array and return the total. 

#include<iostream>
using namespace std;

void FillUp(int a[], int Size);
int total(int a[], int Size);

int main()
{
    const int Size1(4), Size2(5), Size3(6);
    int sum, arr1[Size1], arr2[Size2], arr3[Size3];

    FillUp(arr1, Size1);
    FillUp(arr2, Size2);
    FillUp(arr3, Size3);
    
    cout << endl;
    cout << "The first array consists of: ";
    for (int x: arr1)
    {
        cout << x << " ";
    }
    cout  << "and added up equals to: " << total(arr1, Size1) << endl;
    cout << "The second array consists of: ";
    for (int x: arr2)
    {
        cout << x << " ";
    }
    cout << "and added up equals to: " << total(arr2, Size2) << endl;
    cout << "The third array consists of: ";
    for (int x: arr3)
    {
        cout << x << " ";
    }
    cout << "and added up equals to: " << total(arr3, Size3) << endl;
}

void FillUp(int a[], int Size)
{
    cout << "Please enter " << Size << " number(s): ";
    for (int i = 0; i < Size; i++)
        cin >> a[i];
}

int total(int a[], int Size)
{
    int sum(0);
    for (int i(0); i < Size; i++)
    {
        sum = sum + a[i];
    }
    return (sum);
}



