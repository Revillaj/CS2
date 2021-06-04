// Alex & Jose
// 6/2/21
// Chapter 8 task 2
// create 4 sting objects, an empty string and the rest similar to the example in class
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string phrase;
	string adjective("fried"), noun("ants");
	string wish = "Bon Appetit!";

	phrase = "I love " + adjective + " " + noun + "!";
	cout << phrase << endl
		<< wish << endl;

	return (0);
}
