// Jose and Sagar 
// 5/10/2021
// Task #4: Array Functions and Search Algorithm (includes 3 functions)
// Write 3 fuctions, populatearray,searcharray and displayarray to search through the array

#include <iostream>
using namespace std;

void populateArray(int a[], int);
int searchArray(int a[], int, int&);
void displayArray(int, int);


int main()
{
    int arr[5]={17,9,3,54,29};
    int result,lookfor;
    const int size(5);

    populateArray(arr,size);
    result = searchArray(arr,size, lookfor);
    displayArray(lookfor, result);

}

void populateArray(int a[], int size)
{
    
    for(int i(0); i<size; i++)
    {
        cout << "Enter a number:";
        cin >> a[i];
    }
    
}

int searchArray(int a[], int size, int& lookfor)
{
    cout << "What number are we looking for?: ";
    cin >> lookfor;
    for(int i(0);i<size;i++)
    {
        if(a[i] == lookfor)
        {
            return(i + 1);
        }
    }
    return(-1);
}

void displayArray(int lookfor, int result)
{
    
    if(result > 0)
    {
        cout << "You specified we are looking for " << lookfor << ". It was found in location " << result << " of the list." << endl;
    }
    else
    {
        cout << "The number you specified does not exist" << endl;
    }
}
