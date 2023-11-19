//practising chapter 2 programs 

#include <iostream>

//add integers 

int main() {

	int number1{ 0 };
	
	int number2{ 0 };

	int sum{ 0 };

	std::cout << "Enter first numner: ";
	std::cin >> number1;

	std::cout << "Enter second number: ";
	std::cin >> number2;

	sum = number1 + number2;

	std::cout << "Sum is  " << sum << std::endl;

	return 0;
}


//display message
/*
int main()
{
	std::cout << "Welcome to\n c ++" << std::endl;

	return 0;
}
*/

