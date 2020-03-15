#include <iostream>
//Made by Developer Adam Jakob Lundell
//Github AdamLundell1992
int main()
{

	char choice;
	int num1, num2, result;
	choice = '0';
	std::cout << "wellcome to Adams Calculator Program " << std::endl;

	while (choice != 'e') {
		std::cout << "To use Addition type ->: + " << std::endl;
		std::cout << "To use Subtraction type ->: - " << std::endl;
		std::cout << "To use Divided type ->: /" << std::endl;
		std::cout << "To use Multiplication type ->: * " << std::endl;
		std::cout << "To use Modulo type ->: % " << std::endl;
		std::cout << "To exit program type ->: e " << std::endl;
		std::cin >> choice;
		std::cout << "You have chosen: " << choice << std::endl;
		switch (choice) {
		case '+':
			system("cls");
			std::cout << "Type in a Number: " << std::endl;
			std::cin >> num1;
			std::cout << " Type a second Operator to your calculation: " << std::endl;
			std::cin >> num2;
			result = num1 + num2;
			std::cout << num1 << " + " << num2 << " = " << result << std::endl;
			break;

		}
		switch (choice) {
		case '-':
			system("cls");
			std::cout << "Type in a Number: " << std::endl;
			std::cin >> num1;
			std::cout << " Type a second Operator to your calculation: " << std::endl;
			std::cin >> num2;
			result = num1 - num2;
			std::cout << num1 << " - " << num2 << " = " << result << std::endl;
			break;
		}
		switch (choice) {
		case '/':
			system("cls");
			std::cout << "Type in a Number: " << std::endl;
			std::cin >> num1;
			std::cout << " Type a second Operator to your calculation: " << std::endl;
			std::cin >> num2;
			result = num1 / num2;
			std::cout << num1 << " / " << num2 << " = " << result << std::endl;
			break;
		}
		switch (choice) {
		case '*':
			system("cls");
			std::cout << "Type in a Number: " << std::endl;
			std::cin >> num1;
			std::cout << " Type a second Operator to your calculation: " << std::endl;
			std::cin >> num2;
			result = num1 * num2;
			std::cout << num1 << " * " << num2 << " = " << result << std::endl;
			break;
		}
		switch (choice) {
		case '%':
			system("cls");
			std::cout << "Type in a Number: " << std::endl;
			std::cin >> num1;
			std::cout << " Type a second Operator to your calculation: " << std::endl;
			std::cin >> num2;
			result = num1 % num2;
			std::cout << num1 << " % " << num2 << " = " << result << std::endl;
			break;
		}
		if (choice == 'exit') {
			break;
		}
	}
	std::cout << "Calculator will now exit BYE BYE " << std::endl;
	system("exit");
}
