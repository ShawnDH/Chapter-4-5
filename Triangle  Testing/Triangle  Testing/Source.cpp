/* Triangle Testing
04/13/2018
Author:ShawnD Herrick */

#include <iostream>
#include <string>
#include <math.h>

int main()
{
	double sideA, sideB, sideC;
	double area;
	double perimeter;
	std::string userInputSide;
	std::string userInputTriangleType;

	//Solving for a type of triangle
	std::cout << "What type of triangle do you want to solve for? \n Right, Isosceles, or Equilateral \n >";
	std::cin >> userInputTriangleType;

	//Right Triangle
	if (userInputTriangleType == "Right" || "right")
	{
		std::cout << "Which side of the right triangle do you want to solve? \n A(Height), B(Base), or C(Slope) \n >";
		std::cin >> userInputSide;

		if (userInputSide == "C")
		{
			std::cout << "You chose side " << userInputSide << ", what is the distance for side A. \n >";
			std::cin >> sideA;

			std::cout << "What is the distance for side B. \n >";
			std::cin >> sideB;

			sideC = sqrt((sideA * sideA) + (sideB * sideB));
			area = (sideA * sideB) / 2;
			perimeter = sideA + sideB + sideC;
			std::cout << "The distance for side C is " << sideC << "\nThe area of the triangle is " << area << "\nThe perimeter of the triangle is " << perimeter << std::endl;
		}
		if (userInputSide == "B")
		{
			std::cout << "You chose side " << userInputSide << ", what is the distance for side A. \n >";
			std::cin >> sideA;

			std::cout << "What is the distance for side C. \n >";
			std::cin >> sideC;

			sideB = sqrt((sideA * sideA) + (sideC * sideC));
			area = (sideA * sideB) / 2;
			perimeter = sideA + sideB + sideC;
			std::cout << "The distance for side B is " << sideB << "\nThe area of the triangle is " << area << "\nThe perimeter of the triangle is " << perimeter << std::endl;
		}
		if (userInputSide == "A")
		{
			std::cout << "You chose side " << userInputSide << ", what is the distance for side B. \n >";
			std::cin >> sideB;

			std::cout << "What is the distance for side C. \n >";
			std::cin >> sideC;

			sideA = sqrt((sideB * sideB) + (sideC * sideC));
			area = (sideA * sideB) / 2;
			perimeter = sideA + sideB + sideC;
			std::cout << "The distance for side A is " << sideA << "\nThe area of the triangle is " << area << "\nThe perimeter of the triangle is " << perimeter << std::endl;
		}
	}
	//Isosceles Triangle
	if (userInputTriangleType == "Isosceles" || "isosceles")
	{
		std::cout << "Which side of the isosceles triangle do you want to solve? \n A, B, or C \n >";
		std::cin >> userInputSide;
		
		if (userInputSide == "C")
		{

		}
	}
	system("pause");
	return 0;
}