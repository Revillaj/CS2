//Name: Jose Revilla , Sagar Kapri
//Date : May 5, 2021
//Project Name: A program to calculate the retail price.

#include<iostream>
#include<string>

using namespace std;

void GetInput(string& ItemName, double& WholesalePrice, int& TurnOverDays);
/* Precondition: Has the name of the item, wholesale price(price they paid) and days before its sold(turnover)
Postcondition: The Values of ItemName, WholeSalePrice and TurnOverDays is referenced back to the main function. */
double CalculateRetail(double WholeSalePrice, int TurnOverDays);
/* Precondition: GetInput Funciton succesfully returns WholeSalePrice and TurnOverDays that all hold values
Postcondition: Price adjustment is applied to WholeSalePrice based on the amount of turnover days and returns the 
updated price to RetailPrice as well as formats "$$.$$" the price correctly */
void Output(string ItemName, double WholesalePrice, double RetailPrice, int TurnOverDays, char& Ans);
/* Precondition: Both GetInput and CalculateRetail are successful at populating their respective veriables
Postcondition: Prints out a summary with the original price of the item(along with the name) as well as the updated price 
reflecting the days of turnover. Also responsible for restarting the loop if the user decides to calculate the cost of another item */

int main()
{
	char Ans('N');
	do
	{
		string ItemName;
		int TurnOverDays;
		double WholeSalePrice, RetailPrice(0);
		GetInput(ItemName, WholeSalePrice, TurnOverDays);
		RetailPrice = CalculateRetail(WholeSalePrice, TurnOverDays);
		Output(ItemName, WholeSalePrice, RetailPrice, TurnOverDays, Ans);
	}
	while (Ans == 'Y' || Ans == 'y');

}
void GetInput(string& ItemName , double& WholeSalePrice , int& TurnOverDays )
{
	

	cout << "What is the name of your product?: ";
	cin >> ItemName;
	cout << "What is the price of your product?: ";
	cin >> WholeSalePrice;
	cout << "How many days do you estimate the product will sold?: ";
	cin >> TurnOverDays;
	
}
double CalculateRetail(double WholeSalePrice, int TurnOverDays)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double RetailPrice;

	if (TurnOverDays <= 7)
    {
        RetailPrice = WholeSalePrice + (0.05 * WholeSalePrice);
    }
	else
    {
        RetailPrice = WholeSalePrice + (0.10 * WholeSalePrice);
    }
	return RetailPrice;
}
void Output(string ItemName, double WholeSalePrice, double RetailPrice, int TurnOverDays, char& Ans)
{
	cout << "The Wholesale price for " << ItemName << " is $" << WholeSalePrice << endl
	     << "The retail price for " << ItemName << " is $" << RetailPrice << endl
	     << "based on " << TurnOverDays << " Days.\n"
         << "---------------------------------------- \n"
	     << "Do you have another product? (Y/N): ";
	cin >> Ans;
}