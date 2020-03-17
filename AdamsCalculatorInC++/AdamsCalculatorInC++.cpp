#include <iostream>
#include <limits>
//Adams Calculator 


int main()
{

char choice;
choice = 'k';
int num1, num2, result;
bool failNoNumber;



std::cout << "wellcome to Adams Calculator Program " << std::endl;

while (choice != 'e') {
		
std::cout << std::endl;
std::cout << std::endl;
std::cout << "Invalid input, try again: " << std::endl;
std::cout << "To use Addition type ->: + " << std::endl;
std::cout << "To use Subtraction type ->: - " << std::endl;
std::cout << "To use Divided type ->: /" << std::endl;
std::cout << "To use Multiplication type ->: * " << std::endl;
std::cout << "To use Modulo type ->: % " << std::endl;
std::cout << "Type in a Number: " << std::endl;





		do {
	std::cin >> num1;
	failNoNumber = std::cin.fail();
	if (failNoNumber) {
	std::cout << "Invalid input, try again: " << std::endl;
	std::cout << "Type in a Number: " << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	} while (failNoNumber == true);


						while (true) {
						std::cout << "Select one of the avaiable Operations : " << std::endl;
						std::cin >> choice;
						if (!(choice == '+' || choice == '-' || choice == '*' || choice == '/' || choice == '%' || choice == 'e')) {
							std::cout << "Invalid input, try again: " << std::endl;

						}
						else
						break;
						}
								do {

								std::cout << "Type in a Second Number: " << std::endl;
								std::cin >> num2;
								failNoNumber = std::cin.fail();
								if (failNoNumber) {
									std::cout << "Invalid input, try again: " << std::endl;
									std::cout << "Type in a Number: " << std::endl;
								}
								std::cin.clear();
								std::cout << "Invalid input, try again: " << std::endl;
								std::cout << "Type in a Second Number: " << std::endl;
								std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
								} while (failNoNumber == true);
		
	
			
			
		switch (choice) {
		case '+':
			system("cls");
			std::cout << "You have selected the operation: " << choice << std::endl;	
			result = num1 + num2;
			std::cout << num1 << " + " << num2 << " = " << result << std::endl;
			break;

		}
		switch (choice) {
		case '-':
			system("cls");
			std::cout << "You have selected the operation: " << choice << std::endl;
			result = num1 - num2;
			std::cout << num1 << " - " << num2 << " = " << result << std::endl;
			break;
		}
		switch (choice) {
		case '/':
			system("cls");
			std::cout << "You have selected the operation: " << choice << std::endl;
			result = num1 / num2;
			std::cout << num1 << " / " << num2 << " = " << result << std::endl;
			break;
		}
		switch (choice) {
		case '*':
			system("cls");
			std::cout << "You have selected the operation: " << choice << std::endl;
			result = num1 * num2;
			std::cout << num1 << " * " << num2 << " = " << result << std::endl;
			break;
		}
		switch (choice) {
		case '%':
			system("cls");
			std::cout << "You have selected the operation: " << choice << std::endl;
			result = num1 % num2;
			std::cout << num1 << " % " << num2 << " = " << result << std::endl;
			break;
		}	
	}	
}
