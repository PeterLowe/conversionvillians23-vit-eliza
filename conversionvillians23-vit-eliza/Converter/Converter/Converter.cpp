//Name: Vit Prechtl
//		Eliza Zimmermann

#include <iostream>

char printMenu();
float degreesToRadians();

int main()
{
	char userChoice;
	userChoice = printMenu();

	if (userChoice == 'A')
	{
		degreesToRadians();
	}
	else if (userChoice == 'B')
	{
		//Other
	}


	return 0;
}

char printMenu()
{
	char choice = ' '; //User input choice
	std::cout << "Please enter a upper case letter to convert from left to right\And lower to convert from right to left" << std::endl;
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;
	std::cout << "[D] Mpg <<--->> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <<--->> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
		std::cout << "Enter your choice ";
	std::cin >> choice;
	return choice;
}


float degreesToRadians()
{
	const float degree180 = 180;
	const float PI = 3.14f;
	float degree = 0;
	float radian = 0;

	std::cout << "Enter value of degrees" << std::endl;
	std::cin >> degree;

	radian = degree * (PI / degree180);

	std::cout << degree << " degrees is " << radian << " radians." << std::endl;

	return radian;
}
