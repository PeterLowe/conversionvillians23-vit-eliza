//Name: Vit Prechtl
//		Eliza Zimmermann

#include <iostream>

char printMenu(); //Eliza

#include <iostream>

char printMenu()
{
	char choice = ' '; //User input choice
	std::cout << "Please enter a upper case letter to convert from left to right\And lower to convert from right to left" << std::endl;
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;

	std::cout << "[Q] Exit [---] Exit [q]";
		std::cout << "Enter your choice";
	std::cin >> choice;
	return choice;
}

int main()
{

	return 0;
}

char printMenu()
{
	char choice = ' ';
	std::cout << "Please enter a upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
	
	std::cout << "[D] Mpg <<--->> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <<--->> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}