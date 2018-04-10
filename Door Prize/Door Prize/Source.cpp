/*Door Prize
04/10/2018
Author:ShawnD Herrick */

#include <iostream>

int main()
{
	int doorChoice;
	std::cout << "Please pick a door 1, 2, or 3 \n >";
	std::cin >> doorChoice;
	if (doorChoice == 1)
	{
		std::cout << "The prize behind door #" << doorChoice << " is a brand new car!" << std::endl;
	}
	else
	if (doorChoice == 2)
	{
		std::cout << "The prize behind door #" << doorChoice << " is a life time of torment and self doubt!" << std::endl;
	}
	else
	if (doorChoice == 3)
	{
		std::cout << "The prize behind door #" << doorChoice << " is I don't know a cookie!" << std::endl;
	}
	else
	{
		std::cout << "ERROR DOOR #" << doorChoice << " DOES NOT EXIST!!"<< std::endl;
	}

	system("pause");
	return 0;
}