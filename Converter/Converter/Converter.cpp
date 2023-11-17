//Name: Vit Prechtl
//		Eliza Zimmermann

#include <iostream>

char printMenu();
void radiansToDegrees();


int main()
{
	char userChoice;
	userChoice = printMenu();
	float radian = 0;








	if (userChoice == 'a')
	{
		radiansToDegrees();
	}
	else if (userChoice == 'b')
	{
		//Feet&Inches = 
	}

	return 0;
}

char printMenu()
{
	char choice = ' '; //User input choice
	std::cout << "Please enter a upper case letter to convert from left to right\And lower to convert from right to left" << std::endl;
	std::cout << "[A] Degrees     <--->		Radians			[a]" << std::endl;
	std::cout << "[B] Centimeters <--->		Feet & Inches		[b]" << std::endl;
	std::cout << "[C] Litres      <--->		Gallons			[c]" << std::endl;
	std::cout << "[D] Mpg         <--->		L/100km			[d]" << std::endl;
	std::cout << "[E] Kilograms   <--->		Stone & Pounds		[e]" << std::endl;
	std::cout << "[F] Celsius     <--->		Fahrenheit		[f]" << std::endl;
	std::cout << "[Q] Exit        [---]		Exit			[q]" << std::endl;
		std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}



void radiansToDegrees()
{
	const float DEGREES_TO_CONVERT = 180;
	const float PI = 3.14f;
	float radians = 0;
	float degrees = 0;
	float radiansPI = 0;

	std::cout << "What is the radian" << std::endl;
	std::cin >> radians;

	radiansPI =  radians * (DEGREES_TO_CONVERT / PI);


	std::cout << "Radians "<<radians <<" converted into degrees : "<< std::endl;
	std::cout << "Radians: " << radians << std::endl;
	std::cout << "Degrees: " << radiansPI << std::endl;
}