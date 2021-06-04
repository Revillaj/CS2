// Jose & Min 
// 04-21-2021
// Call by Value
// Students will be writing a program that asks the user for the temperature outside in Fahrenheit,
// and then converts the temperature to Celsius and prints out a message to the user displaying both temperatures.

#include <iostream>
using namespace std;

double celsius(double);
void Printresults(double, double);

int main()
{
    int temperature, result;
    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> temperature;
    result = celsius(temperature); 
    Printresults(result, temperature);
    return(0);
}
double celsius(double temp)
{
    int result;
    result = (temp - 32) * 5/9;
    return (result);
}
void Printresults(double result, double temp)
{
    cout << "You entered: " << temp << " degrees Farh" << endl;
    cout << "Your temperature in Celsius is " << result << " degrees." << endl;
}