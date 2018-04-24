/*Rock, Paper, Scissors
04/10/2018
Author:ShawnD Herrick */

#include <iostream>
#include <string>
#include <time.h>
//#include <random>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int userWins = 0, aiWins = 0, ties = 0;
	std::string userChoice;
	std::string cntinue;
	int rPS = 0;
	do{
		srand(time(NULL));
		// 1 = rock, 2 = paper, 3 = scissors
		rPS = rand() % 3 + 1;
		std::cout << "Please pick: Rock(R), Paper(P), or Scissors(S) \n >";
		std::cin >> userChoice;
		if (userChoice == "Rock" || userChoice == "rock" || userChoice == "R" || userChoice == "r")
		{
			if (rPS == 1)
			{
				std::cout << "Both you and the AI picked rock. \n It's a tie!" << std::endl;
				ties = ties + 1;
			}
			if (rPS == 2)
			{
				std::cout << "You picked Rock and the AI picked Paper. \n AI wins." << std::endl;
				aiWins = aiWins + 1;
			}
			if (rPS == 3)
			{
				std::cout << "You picked Rock and the AI picked Scissors. \n You win!" << std::endl;
				userWins = userWins + 1;
			}
		}
		else if (userChoice == "Paper" || userChoice == "paper" || userChoice == "P" || userChoice == "p")
		{
			if (rPS == 1)
			{
				std::cout << "You picked Paper and the AI picked Rock. \n You win!" << std::endl;
				userWins = userWins + 1;
			}
			if (rPS == 2)
			{
				std::cout << "Both you and the AI picked Paper. \n It's a tie!" << std::endl;
				ties = ties + 1;
			}
			if (rPS == 3)
			{
				std::cout << "You picked Paper and the AI picked Scissors. \n AI wins." << std::endl;
				aiWins = aiWins + 1;
			}
		}
		else if (userChoice == "Scissors" || userChoice == "scissors" || userChoice == "S" || userChoice == "s")
		{
			if (rPS == 1)
			{
				std::cout << "You picked Scissors and the AI picked Rock. \n AI wins." << std::endl;
				aiWins = aiWins + 1;
			}
			if (rPS == 2)
			{
				std::cout << "You picked Scissors and the AI picked Paper. \n You win!" << std::endl;
				userWins = userWins + 1;
			}
			if (rPS == 3)
			{
				std::cout << "Both you and the AI picked SCissors. \n It's a tie!" << std::endl;
				ties = ties + 1;
			}
		}
		else
		{
			std::cout << "ERROR!!! '" << userChoice << "' is not a valid statement. \n Please try again." << std::endl;				
			main();
		}
		//std::cout << "\n+====ScoreBoard====+" << std::endl;
		//std::cout << " Your Wins ----- " << userWins << std::endl;
		//std::cout << " AI Wins ------- " << aiWins << std::endl;
		//std::cout << " Ties ---------- " << ties << std::endl;
		//std::cout << "+==================+" << std::endl;
		std::cout << "\nWould you like to play again? \n >";
		std::cin >> cntinue;
	} while (cntinue != "No" || cntinue != "nO" || cntinue != "NO" || cntinue != "no");
		system("pause");
		return 0;
}