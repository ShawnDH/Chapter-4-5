/*Guessing Game
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
	//initialize random seed
	srand(time(NULL));
	//generate secret number between 1 and 10
	secret = rand() % 100 + 1;

	std::cout << "Please pick a number between 1-10 \n >";
	std::cin >> numChoice;

	/*if (numChoice == secret)
	{
		std::cout << "Cong-a-rats you guessed the correct number, " << secret << std::endl;
	}
	else
	{
		std::cout << secret << " was the wroong numba!" << std::endl;
	}*/

	system("pause");
	return 0;
}