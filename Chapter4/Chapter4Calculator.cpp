// Jose and Min 
// 4/7/2021
// Calculator Functions
// Create a calculator using functions

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2;
    void SumOfTwoNum(int, int);
    void SubtractTwoNum(int, int);
    void MultiplyTwoNum(int, int);
    void DivideTwoNum(int, int);
    
    cout << "Enter Two numbers seperated by a space:";
    cin >> num1 >> num2;

    SumOfTwoNum(num1, num2);
    SubtractTwoNum(num1, num2);
    MultiplyTwoNum(num1, num2);
    DivideTwoNum(num1, num2);
    
}
void SumOfTwoNum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    cout << "Adding " << num1 << " and " << num2 << " equals " << result << endl;
}
void SubtractTwoNum(int num1, int num2)
{
    int result;
    result = num1 - num2;
    cout << "Subtracting " << num1 << " and " << num2 << " equals " << result << endl;
}
void MultiplyTwoNum(int num1,int num2)
{
    int result;
    result = num1 * num2;
    cout << "Multiplying " << num1 << " and " << num2 << " equals " << result << endl;
}
void DivideTwoNum(int num1 , int num2)
{
    int result;
    result = num1 / num2;
    cout << "Dividing " << num1 << " and " << num2 << " equals " << result << endl;
}