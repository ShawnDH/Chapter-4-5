/* Ages with sass
04/10/2018
Author:ShawnD Herrick*/
#include <iostream>

int main()
{
	int userAge;
	std::cout << "Tell me, how old are you? \n >";
	std::cin >> userAge;
	if (userAge < 1)
	{
		std::cout << "Hey! You can't be " << userAge << " years old! \n Don't try to pull the wool over my eyes you unfrosted poptart." << std::endl;
	}
	else if (userAge == 1 | 2 | 3 | 4 | 5)
	{
		std::cout << "What? Did mom leave the computer open again?" << std::endl;
	}
	else if (userAge == 6 | 7 | 8 | 9 | 10 | 11 | 12)
	{
	}




	system("pause");
	return 0;
}