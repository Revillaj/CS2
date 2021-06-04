// Jose and Sagar 
// 5/12/2021
// Task #5: 2-Dimensional Arrays
// Write 3 functions for 2-Dimensional Arrays, populateArray, sumDiagonal,displayArray

#include <iostream>
using namespace std;

void populateArray(int array[][3], int size);
int sumDiagonal(int array[][3], int size);
void displayArray(int array[][3], int, int size);

const int size(3);


int main()
{
    int array[3][3];
    int sum;

    populateArray(array,size);
    sum = sumDiagonal(array,size);
    displayArray(array,size,sum);

}
void populateArray(int array[][3], int size)
{
    int sum(0);
    for(int i(0);i<size;i++)
    {
        for(int j=0; j<size;j++)
        {
        cout << "Enter a number: ";
        cin >> array[i][j];
        }
    }

}
int sumDiagonal(int array[][3], int size)
{
    int sum(0);
    for(int i(0); i<size;i++)
    {
        for(int j(0); j<size;j++)
        {
            if (i==j)
            {
               // cout << array[i][i] << endl;
                sum += array[i][i];
                //cout << sum << endl;
            }
        }
    }
   // cout << sum << " test 2" << endl;
    return(sum);
}
void displayArray(int array[][3], int size, int sum)
{
    cout << "Your 2-Dimensional array consists of:" << endl;
    for (int i(0);i<size;i++)
    {
        for(int j(0); j<size;j++)
        {
            cout << array[i][j];
            if (j < 2)
        {
            cout << ", ";
        }
        }
        cout << endl;
    } 
    cout << "The sum of the diagonal is " << sum << "." << endl;
}
