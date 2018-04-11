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
	else if (userAge == 1 | userAge <= 5)
	{
		std::cout << "What? Did mom leave the computer open again?" << std::endl;
	}
	else if (userAge == 6 | userAge <= 12)
	{
		std::cout << "Sorry, this sight is 13 and up kiddo. Why don't you go play some minecraft." << std::endl;
	}
	else if (userAge == 13 | userAge <= 18)
	{
		std::cout << "Get a job ya hippie." << std::endl;
	}
	else if (userAge == 19 | userAge <= 25)
	{
		std::cout << "Lol millennials." << std::endl;
	}
	else if (userAge == 26 | userAge <= 32)
	{
		std::cout << "You know? I'm gonna say it.. I don't care about you or your problems.." << std::endl;
	}
	else if (userAge == 33 | userAge <= 40)
	{
		std::cout << "I can't belive you life is nearly half over and you're spending it reading this." << std::endl;
	}
	else if (userAge > 40)
	{
		std::cout << "Can you even read this?" << std::endl;
	}

	system("pause");
	return 0;
}