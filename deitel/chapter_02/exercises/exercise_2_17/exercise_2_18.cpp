//exercise 2.18

#include <iostream>

int main()
{

	int number1{ 0 };
	int number2{ 0 };

	std::cout << "Enter two numbers: ";
	std::cin >> number1 >> number2;

	if (number1 == number2) {
		std::cout << "Bruh yuo lazyyyyyy!\n";
		return 0;
	}
	if (number1 < number2) {
		std::cout << number1 << " is less than " << number2<<"\n";
	}
	else {
		std::cout << number2 << " is greater than " << number1<<"\n";
	}

	std::cout << std::endl;

	return 0;
}