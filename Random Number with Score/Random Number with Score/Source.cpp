/*Random Number With Score
04/10/2018
Author:ShawnD Herrick */

#include <iostream>
#include <time.h>
//#include <random>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numChoice;
	int secret;
	int count = 1;
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 10
	secret = rand() % 100 + 1;
	do{
		std::cout << "Please pick a number between 1-100 \n >";
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you picked is too high, guess again." << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you picked is too low, guess again." << std::endl;
			count = count + 1;
		}
	} while (numChoice != secret);

	std::cout << "Cong-A-Rats!! It took you " << count << " tries." << std::endl;

	system("pause");
	return 0;
}