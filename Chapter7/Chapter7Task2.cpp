// Jose and Sagar 
// 5/5/2021
// Task #2 : range-based for loop
// Create an array of characters called initials that holds the characters of your name.

#include <iostream>
using namespace std;
 
int main()
{
    char name[4]={'J','o','s','e'};

    for(char element: name)
    {
        cout << element << endl;
    }
    return(0);
}