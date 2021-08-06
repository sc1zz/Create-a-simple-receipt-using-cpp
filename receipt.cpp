/*
create a receipt using c++
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string item;
	double price;
	int quantity;
	double total;

	cout << "What would you like to purchase? " << endl;
	getline(cin, item);
	cout << "How many items would you like to purchase?" << endl;
	cin >> quantity;
	cout << "What is the price of each item? " << endl;
	cin >> price;

	total = price * quantity;

	
	cout << "Your total is: $" << total << endl;

	return 0;
}

