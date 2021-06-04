/*
 * ProjectTwoPizza.cpp
 * Created on: Mar 22, 2021
 * Author: Jose & Min
 // Write a pizza ordering program that allows the users to customize their pizzas.
 */


#include <iostream>
#include <string>
using namespace std;

void Welcome();
//Display Welcome message.
void AskName(string& Name);
//Let user enter first name.
void Menu();
//Show the menu
void ChooseSize(int& PizSize, double& TotalCost);
//Users choose size and show cost.
void CrustMenu(string& CrustType);
//Users input the crust type.
void ToppingMenu();
//Show the Topping Menu.
string ChooseTopping(string& Toppings, int& Count);
void PizzaDiscount(string& Name, double& TotalCost);
//Discount will be applied if customers' names match with the owners.
double TotalCostCalculation(double& TotalCost, int Count, string FirstName, int PizSize, string Toppings, string CrustType);
//Final cost calculation.
const double Tax(0.0795);
// Tax Rate is a constant

int main()
{
	//Variable declarations:
	int PizSize, Count;
	double TotalCost;
	string Name, Toppings, CrustType;

	//Function call statements:
	Welcome();
	AskName(Name);
	Menu();
	ChooseSize(PizSize, TotalCost);
	CrustMenu(CrustType);
	ToppingMenu();
	Toppings = ChooseTopping(Toppings,Count);
	PizSize = TotalCostCalculation(TotalCost,Count,Name,PizSize,Toppings,CrustType);
	PizzaDiscount(Name, TotalCost);
}

//Function definitions
void Welcome()
{
	cout << "Welcome to Min and Jose's Pizzeria" << endl;
}

void AskName(string& Name)
{
	cout <<"Please enter your first name:" << endl;
	cin >> Name;
    cout << "Thanks!" << endl;
    return;
}

void Menu()
{
	cout << "Lets get you started, our menu is as follows:" << endl
	     << "		Pizza Size (inches)	       Cost"  << endl
	     << "			10'		      $10.99" << endl
		 << "			12'		      $12.99" << endl
		 << "			14'		      $14.99" << endl
		 << "			16'		      $16.99" << endl;
}

void ChooseSize(int& PizSize, double& TotalCost)
{
	cout << "Please choose the size of your pizza (Please enter the number for size):";
	cin >> PizSize;
	if (PizSize == 10)
	{
		cout << "Nice choice! I got you down for a 10 inch pizza" << endl;
		TotalCost += 10.99;
	}
	else if (PizSize == 12)
	{
		cout << "Nice choice! I got you down for a 12 inch pizza" << endl;
		TotalCost += 12.99;
	}
    else if (PizSize == 14)
	{
    	cout << "Nice choice! I got you down for a 14 inch pizza" << endl;
    	TotalCost += 14.99;
	}
	else if (PizSize == 16)
	{
		cout << "Nice choice! I got you down for a 16 inch pizza" << endl;
		TotalCost += 16.99;
	}

	else // if the input is invalid, the default is set to 12'.
    {
		cout << "Size unavailable, you will get a 12 inch." << endl;
		PizSize = 12;
		TotalCost = 12.99;
    }
	return;
}

void CrustMenu(string& CrustType)
{
	char Crust;
	cout << "What type of crust do you want? (H)Hand-tossed, (T) Thin-crust, or (D) Deep-dish (enter H, T, or D):" << endl;
    cin >> Crust;
		switch (Crust)
		{
		case 'h':
		case 'H':
			CrustType = "Hand-Tossed";
			break;
		case 'T':
		case 't':
			CrustType = "Thin-Crust";
			break;
		case 'D':
		case 'd':
			CrustType = "Deep-dish";
			break;
		// Default option if neither of the above is chosen.
		default:
			cout << "Crust unavailable,you will get Hand-Tossed." << endl << endl;
			CrustType = "Hand-Tossed";

		}
		return;
}

void ToppingMenu()
{
	cout << "Now come toppings! Remember, each pizza comes with cheese and each additional topping is $1.25 extra" << endl;
}

string ChooseTopping(string& Toppings, int& Count)
// User choose toppings, if choose "Y"or "y" count increments.
{
	char Topping1,Topping2,Topping3,Topping4;
	double TotalCost(0);
	cout << "Do you want Pepperoni? (Y/N):";
	cin >> Topping1;
	if( Topping1 == 'y' || Topping1 == 'Y')
	{
		Toppings += "Pepperoni ";
			TotalCost += 1.25;
			Count = Count +1;
		}
		cout << "Do you want Sausage? (Y/N):";
		cin >> Topping2;
		if( Topping2 == 'y' || Topping2 == 'Y')
		{
			Toppings += "Sausage ";
			TotalCost += 1.25;
			Count = Count +1;
		}
		cout << "Do you want Onion? (Y/N):";
		cin >> Topping3;
		if( Topping3 == 'y' || Topping3 == 'Y')
		{
			Toppings += "Onion ";
			TotalCost += 1.25;
			Count = Count +1;
		}
		cout << "Do you want Mushrooms?? (Y/N):";
		cin >> Topping4;
		if( Topping4 == 'y' || Topping4 == 'Y')
		{
			Toppings += "Mushrooms ";
			TotalCost += 1.25;
			Count = Count +1;
		}
		return Toppings;
}
void PizzaDiscount(string& Name, double& TotalCost)
// if customer name matches owners names, apply $2 discount
{
	bool Compare;
	if (Name == "MI" || Name == "JOSE" || Name == "mi" || Name == "jose" || Name == "Mi" || Name == "Jose")
    Compare = true;

    else
    	Compare = false;
    if(Compare == true)
    {
    	cout << "You will receive a $2 discount.\n";
    	TotalCost = TotalCost - 2;
    	cout << "After discount your grand total is:$" << TotalCost <<".\n";
    }
    else
    	return;
}

double TotalCostCalculation(double& TotalCost, int Count, string FirstName, int PizSize, string Toppings, string CrustType)
{
	// set 2 decimal places
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// Receipt's content
	TotalCost = (TotalCost + (1.25 * Count));
	TotalCost = TotalCost + (TotalCost * Tax);
	cout << endl;
	cout <<"Awesome! This is what you've ordered:" << endl
		 << PizSize << " inch " << CrustType << " pizza with cheese " << Toppings << endl;
	cout << "Your final cost is $";
	cout << TotalCost << endl;
	cout << "Your order will be ready for pickup in 30 minutes. Thanks for ordering!" << endl;
	return PizSize;

}
