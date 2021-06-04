// Min and Jose
// 4/20/2021
// Chapter4 Task4
// Students will be implementing the calculation of Factorial o f any specified number using iteration.

#include <iostream>

using namespace std;

int factorial(int);

int main()
{
    int num1;
    cout << "Input a number to calculate Factorial: ";
    cin >> num1;
    cout << factorial(num1) << endl;
}


int factorial(int num1)
{
    int answer(1);
    while (num1 > 1)
    {
        cout << answer;
        answer = num1 * answer;
        cout <<"  " << num1 << endl;
        num1--;
    }
    return answer;
}