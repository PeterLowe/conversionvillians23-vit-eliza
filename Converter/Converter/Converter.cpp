//Name: Vit Prechtl
//		Eliza Zimmermann

#include <iostream>

<<<<<<< HEAD
=======
char printMenu();
float radiansToDegrees();

>>>>>>> c7249d20ed8742c8abc478c1f064fef2861bba43

int main()
{
	char userChoice;
	userChoice = printMenu();
<<<<<<< HEAD

		if (userChoice == 'A')
		{
			degreesToRadians();
		}
=======
	float radian = 0;
>>>>>>> c7249d20ed8742c8abc478c1f064fef2861bba43








	if (userChoice == 'a')
	{
		radian = radiansToDegrees();
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
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;
	std::cout << "[D] Mpg <<--->> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <<--->> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
		std::cout << "Enter your choice";
	std::cin >> choice;
	return choice;
}



float radiansToDegrees()
{
	const float DEGREES = 180.0f;
	const float PI = 3.14f;
	float radian = 0;

<<<<<<< HEAD
float degreesToRadians()
{
	char choice = ' ';
	float radiansValue = 0;
	radiansValue = choice * (3.14159 / 180);
	return radiansValue;
=======
	radian = radian / (DEGREES / PI);

	return radian;
>>>>>>> c7249d20ed8742c8abc478c1f064fef2861bba43
}