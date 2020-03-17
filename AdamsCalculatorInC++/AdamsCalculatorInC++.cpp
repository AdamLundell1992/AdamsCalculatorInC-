#include <iostream>
#include <limits>
//Adams Calculator 


int main()
{
	 
char choice; //char variable for operations
choice = 'k'; // defined choice to a random character so the while loop not should crash.
int num1, num2, result; //variables for the results
bool failNoNumber; //boolean for checking if numbers is true;


std::cout << "wellcome to Adams Calculator Program " << std::endl;

while (choice != 'e') {// big while loop runs through all program
		
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
	failNoNumber = std::cin.fail();// setting the boolean to false;
	if (failNoNumber) {// if fail number is false
	std::cout << "Invalid input, try again: " << std::endl;// do this
	std::cout << "Type in a Number: " << std::endl;
	} // outside the if
	std::cin.clear(); // clear the error flag of sin 
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //ignore all input ecccept  integers
	} while (failNoNumber == true); //if everything is valid

	//we go here
						while (true) {
						std::cout << "Select one of the avaiable Operations : " << std::endl;
						std::cin >> choice;// only the selected special charaters can bepressed 
						if (!(choice == '+' || choice == '-' || choice == '*' || choice == '/' || choice == '%' || choice == 'e')) {
							std::cout << "Invalid input, try again: " << std::endl;// else you get error messeage and loop

						}
						//if correct
						else
						break;// we leave the loop
						}
								do { // and we start typing the second value

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
