//comparss 5 numbers

#include<iostream>

int main() {

	int number1{ 0 };
	int number2{ 0 };
	int number3{ 0 };
	int number4{ 0 };
	int number5{ 0 };

	int compatingBYTES{ 0 };

	std::cout << "Enter 5 numbers: ";
	std::cin >> number1 >> number2 >> number3 >> number4 >> number5;

	if (number1 > compatingBYTES) {
		compatingBYTES = number1;

	}
	if (number2 > compatingBYTES) {
		compatingBYTES = number2;

	}
	if (number3 > compatingBYTES) {
		compatingBYTES = number3;

	}
	if (number4 > compatingBYTES) {
		compatingBYTES = number4;

	}
	if (number5 > compatingBYTES) {
		compatingBYTES = number5;

	}

	std::cout << compatingBYTES << " is the greates number." << std::endl;

	//smallest
	compatingBYTES = 9999999999;

	if (number1 < compatingBYTES) {
		compatingBYTES = number1;

	}
	if (number2 < compatingBYTES) {
		compatingBYTES = number2;

	}
	if (number3 < compatingBYTES) {
		compatingBYTES = number3;

	}
	if (number4 < compatingBYTES) {
		compatingBYTES = number4;

	}
	if (number5 < compatingBYTES) {
		compatingBYTES = number5;

	}

	std::cout << compatingBYTES << " is the smallest number." << std::endl;


	return 0;
}