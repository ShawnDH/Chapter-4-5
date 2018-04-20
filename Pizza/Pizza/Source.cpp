/* Pizza Order
04/12/2018
Author:ShawnD Herrick*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string another;
	string pSize;
	string pTopping;
	double lPizza = 15.99;
	double mPizza = 12.99;
	double sPizza = 9.99;
	double total = 0;
	
	do{
		cout << "Welcome to Timmy's Pizzaria! \n----------------------------" << endl;
		cout << "Large Pizza -------- $15.99" << endl;
		cout << "Medium Pizza ------- $12.99" << endl;
		cout << "Small Pizza --------- $9.99" << endl;
		cout << "       - Toppings -        " << endl;
		cout << "Sausage -- Peperoni -- Ham \n" << endl;
		cout << "What size of pizza would you like and what toppings would you like on it? \n (Size) >>";
		cin >> pSize;
		cout << " (Toppings) >>";
		cin >> pTopping;
	} while (another != "No" || another != "nO" || another != "NO" || another != "no");

	system("pause");
	return 0;
}