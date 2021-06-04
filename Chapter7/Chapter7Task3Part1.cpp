// Jose and Sagar 
// 5/5/2021
// Task #3: Arrays and Functions - Part 1
// Declare 3 unpopulated arrays of integers:  num1 of length 4, num2 of length 5, and num3 of length 6.

#include<iostream>
using namespace std;

void FillUp(int a[], int Size);
void Display(int a[], int Size);

int main()
{
    const int Size1(5), Size2(6), Size3(10);
    int arr1[Size1], arr2[Size2], arr3[Size3];
    FillUp(arr1, Size1);
    FillUp(arr2, Size2);
    FillUp(arr3, Size3);

    Display(arr1, Size1);
    Display(arr2, Size2);
    Display(arr3, Size3);
}

void FillUp(int a[], int Size)
{
    for (int i = 0; i < Size; i++)
        {
        cout << "Please enter a number :";
        cin >> a[i];
        }
}

void Display(int a[], int Size)
{
    for (int i(0); i < Size; i++)
    {
        cout << a[i];
        if (i < Size - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}
