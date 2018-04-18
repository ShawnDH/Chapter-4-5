/* Triangle Testing
04/13/2018
Author:ShawnD Herrick */

#include <iostream>
#include <string>
#include <math.h>
#include <limits>
void rightTriangle();
void isoscelesTriangle();
void equilateralTriangle();
int main()
{
	double sideA, sideB, sideC;
	double area;
	double perimeter;
	std::string userInputSide;
	std::string userInputTriangleType;
	std::string finish;
	do{
		//Solving for a type of triangle
		std::cout << "What type of triangle do you want to solve for? \n Right, Isosceles, or Equilateral \n >";
		std::cin >> userInputTriangleType;
			
		//Right Triangle
		if (userInputTriangleType == "Right" || userInputTriangleType == "right")
		{
			rightTriangle();
			std::cout << "Would you like to calculate another Triangle? \n Yes  or  No \n >";
			std::cin >> finish;
		}
		//Isosceles Triangle
		else if (userInputTriangleType == "Isosceles" || userInputTriangleType == "isosceles")
		{
			isoscelesTriangle();
			std::cout << "Would you like to calculate another Triangle? \n Yes  or  No \n >";
			std::cin >> finish;
		}
		//Equilateral Triangle
		else if (userInputTriangleType == "Equilateral")
		{
			equilateralTriangle();
			std::cout << "Would you like to calculate another Triangle? \n Yes  or  No \n >";
			std::cin >> finish;
		}
		else
		{
			std::cout << "That isn't a triangle. Please check you spelling and try again. \n -- \n";
		}
	} while (finish != "No" && finish != "nO" && finish != "NO" && finish != "no");
	system("pause");
	return 0;
}
//right Triangle   Finished
void rightTriangle()
{
	int x = 0;
	double sideA, sideB, sideC;
	double area;
	double perimeter;
	std::string userInputSide;

	std::cout << "Which side of the right triangle do you want to solve? \n A(Height), B(Base), or C(Slope) \n >";
	std::cin >> userInputSide;

	if (userInputSide == "C" || userInputSide == "c")
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
	else if (userInputSide == "B" || userInputSide == "b")
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
	else if (userInputSide == "A" || userInputSide == "a")
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
	else
	{
		std::cout << "That is not an available side. Please try again." << std::endl;
		rightTriangle();
	}
} 
//isosceles Triangle
void isoscelesTriangle()
{
	double sideA, sideB, sideC;
	double area;
	double perimeter;
	std::string userInputSide;

	std::cout << "Which side of the isosceles triangle do you want to solve? \n A(Height), B(Base), or C(Slope) \n >";
	std::cin >> userInputSide;

	if (userInputSide == "C" || userInputSide == "c")
	{
		std::cout << "You chose side " << userInputSide << ", what is the distance for side A. \n >";
		std::cin >> sideA;

		std::cout << "What is the distance for side B. \n >";
		std::cin >> sideB;

		sideC = 0.5 * sqrt(pow(sideA, 2) + (4 * pow(sideB, 2)));
		area = (sideA * sideB) / 2;
		perimeter = 2 * sideA + sideB;
		std::cout << "The distance for side C is " << sideC << "\nThe area of the triangle is " << area << "\nThe perimeter of the triangle is " << perimeter << std::endl;
	}
	else if (userInputSide == "B" || userInputSide == "b")
	{
		std::cout << "You chose side " << userInputSide << ", what is the distance for side A. \n >";
		std::cin >> sideA;

		std::cout << "What is the distance for side C. \n >";
		std::cin >> sideC;
		//(sqrt((sideA * sideA) + (sideC * sideC)))/2
		sideB = 1;
		area = (sideA * sideB) / 2;
		perimeter = 2 * sideA + sideB;
		std::cout << "The distance for side B is " << sideB << "\nThe area of the triangle is " << area << "\nThe perimeter of the triangle is " << perimeter << std::endl;
	}
	else if (userInputSide == "A" || userInputSide == "a")
	{
		std::cout << "You chose side " << userInputSide << ", what is the distance for side B. \n >";
		std::cin >> sideB;

		std::cout << "What is the distance for side C. \n >";
		std::cin >> sideC;

		sideA = sqrt((sideB * sideB) + (sideC * sideC));
		area = (sideA * sideB) / 2;
		perimeter = 2 * sideA + sideB;
		std::cout << "The distance for side A is " << sideA << "\nThe area of the triangle is " << area << "\nThe perimeter of the triangle is " << perimeter << std::endl;
	}
	else
	{
		std::cout << "That is not an available side. Please try again." << std::endl;
		isoscelesTriangle();
	}
}
//equilateral Triangle
void equilateralTriangle()
{
	double sideA, sideB, sideC;
	double area;
	double perimeter;
	std::string userInputSide;

	std::cout << "Which side of the Equilateral triangle do you want to solve? \n A(Height), B(Base), or C(Slope) \n >";
	std::cin >> userInputSide;
	if (userInputSide == "C" || "c")
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
	if (userInputSide == "B" || "b")
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
	if (userInputSide == "A" || "a")
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
	else
	{
		std::cout << "That is not an available side. Please try again." << std::endl;
		equilateralTriangle();
	}
}