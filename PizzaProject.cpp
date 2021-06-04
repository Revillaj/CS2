// Min & Jose 
// 3/22/2021
// Pizza Project
// help user order a pizza and repeat their order to them

#include <iostream>
using namespace std;

int main()
{
	int long phoneNumber;
	int PizSize;
	double total, tax(0.12);
	string name, toppings, crusttype;
	char crust,  toppingChoice, discountInput, anotherZaa;
	bool validDiscount;
	do
	{
		cout << "Welcome to Min and Jose's Pizzeria" << endl
			<< "Please enter your contact information starting with your name: ";
		cin >> name;
		if (name == "jose" || name == "Jose")
		{
			validDiscount = true;
		}
		else if (name == "Min" || name == "min")
		{
			validDiscount = true;
		}
		cout << "Thanks for the information, " << name << endl
			<< "Can we have a phone number for the order? (please enter numbers without dashes!)" << endl;
		cin >> phoneNumber;
		cout << "Thanks!" << endl
			<< "Lets get you started, our menu is as follows:" << endl
			<< "		Pizza Size (inches)					 Cost" << endl
			<< "			10'						$10.99" << endl
			<< "			12'						$12.99" << endl
			<< "			14'						$14.99" << endl
			<< "			16'						$16.99" << endl
			<< "All our pizzas are topped with cheese, if you'd like more toppings, each one is $1.25 extra." << endl
			<< "-------------------------------------------------------------------------" << endl
			<< "Now that thats out of the way, what size would you like your pizza?" << endl;
			cin >> PizSize;
			if (PizSize == 10)
			{
				cout << "Nice choice! I got you down for a 10 inch pizza" << endl;
				total = 10.99;
			}
			else if (PizSize == 12)
			{
				cout << "Nice choice! I got you down for a 12 inch pizza" << endl;
				total = 12.99;
			}
			else if (PizSize == 14)
			{
				cout << "Nice choice! I got you down for a 14 inch pizza" << endl;
				total = 14.99;
			}
			else if (PizSize == 16)
			{
				cout << "Nice choice! I got you down for a 16 inch pizza" << endl;
				total = 16.99;
			}
			else
			{
				cout << "Whoah we dont serve that size Pizza, ill write down you want a 12 inch instead." << endl << endl;
			}

		cout << "What type of crust do you want? (H)Hand-tossed, (T) Thin-crust, or (D) Deep-dish (enter H, T, or D):" << endl;
		cin >> crust;
		switch (crust)
		{
		case 'h':
		case 'H':
			crusttype = "Hand-Tossed";
			break;
		case 'T':
		case 't':
			crusttype = "Thin-Crust";
			break;
		case 'D':
		case 'd':
			crusttype = "Deep-dish";
			break;
		default:
			cout << "That is not a valid crust option, i'll put you'd like a Hand-Tossed crust instead." << endl << endl;
			break;
		}
		cout << "Now come toppings! Remember, each pizza comes with cheese and each topping is $1.25 extra" << endl
			<< "Do you want Pepperoni? (Y/N) :";
		cin >> toppingChoice;
		if( toppingChoice == 'y' || toppingChoice == 'Y')
		{
			toppings += "Pepperoni "; 
			total += 1.25;
		}
		cout << "Do you want Sausage? (Y/N) :";
		cin >> toppingChoice;
		if( toppingChoice == 'y' || toppingChoice == 'Y')
		{
			toppings += "Sausage ";
			total += 1.25;
		}
		cout << "Do you want Onion? (Y/N) :";
		cin >> toppingChoice;
		if( toppingChoice == 'y' || toppingChoice == 'Y')
		{
			toppings += "Onion ";
			total += 1.25;
		}
		cout << "Do you want Mushrooms?? (Y/N) :";
		cin >> toppingChoice;
		if( toppingChoice == 'y' || toppingChoice == 'Y')
		{
			toppings += "Mushrooms ";
			total += 1.25;
		}
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Awesome! This is what you've ordered:" << endl
			<< PizSize << " inch " << crusttype << " pizza with" << endl
			<< toppings << endl
			<< "Price of Pizza . . . . . . . . . . " << total << endl;
		if (validDiscount)
			{
				cout << "Discount  . . . . . . . . . . . - $2.00" << endl;
				total = total - 2;
			}
		tax = tax * total;
		total = total + tax;
		cout << "Tax  . . . . . . . . . . . . . . . " << tax << endl
			<< "Total  . . . . . . . . . . . . . . " << total << endl
			<< "Your order will be ready for pickup in 30 minutes. Thanks for ordering!" << endl << endl
			<< " Wouuld you like to order another pizza?" << endl
			<< "Y/N : ";
		cin >> anotherZaa;
	} 
	while (anotherZaa == 'y' || anotherZaa == 'Y');	


return(0);
}