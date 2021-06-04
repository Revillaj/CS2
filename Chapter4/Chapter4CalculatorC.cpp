// Jose and Min 
// 4/8/2021
// Calculator Functions
// Create a calculator using functions w/ returning int numbers

#include <iostream>
#include <cmath>
using namespace std;

int SumOfTwoNum(int, int);
int SubtractTwoNum(int, int);
int MultiplyTwoNum(int, int);
int DivideTwoNum(int, int);

int main()
{
    int num1, num2;
    
    
    cout << "Enter Two numbers seperated by a space:";
    cin >> num1 >> num2;

    cout << SumOfTwoNum(num1, num2) << endl;
    
    
}
int SumOfTwoNum(int num1, int num2)
{
    int result;
    cout << SubtractTwoNum(num1, num2) << endl;
    result = num1 + num2;
    return(result);
    //cout << "Adding " << num1 << " and " << num2 << " equals " << result << endl;
}
int SubtractTwoNum(int num1, int num2)
{
    int result;
    cout << MultiplyTwoNum(num1, num2) << endl;
    result = num1 - num2;
    return(result);
    //cout << "Subtracting " << num1 << " and " << num2 << " equals " << result << endl;
}
int MultiplyTwoNum(int num1,int num2)
{
    int result;
    cout << DivideTwoNum(num1, num2) << endl;
    result = num1 * num2;
    return(result);
    //cout << "Multiplying " << num1 << " and " << num2 << " equals " << result << endl;
}
int DivideTwoNum(int num1 , int num2)
{
    int result;
    result = num1 / num2;
    return(result);
    //cout << "Dividing " << num1 << " and " << num2 << " equals " << result << endl;
}