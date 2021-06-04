//Jose and Min
// 04-26-2021
//Task #2: Call by Reference
// Students will be implementing the code from our book that swaps two numbers.

#include <iostream>
using namespace std;

void getNum(int& num1, int& num2);
void swapnum(int& num1, int& num2);
void showresult(int num1, int num2);

int main()
{
    int num1, num2(0);
    
    getNum(num1, num2);
    swapnum(num1, num2);
    showresult(num1, num2);
    return(0);
}
void getNum(int& num1, int& num2)
{
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
}
void swapnum(int& num1, int& num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void showresult(int num1, int num2)
{
    cout << "The numbers you entered in reverse are: "
        << num1 << " and " << num2 << endl;
}