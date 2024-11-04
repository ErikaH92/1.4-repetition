// 1.4 repetition.cpp : This program is part 2 of the calculator and the previous program will be included into this program to incorporate a switch statement 
// Using the switch statement due to using the if statement in my program. 
// 
//

//including the string to allow the characters to be identified 
#include <iostream>
#include <string>
using namespace std;
//function of a code 
int main() {
	//double to show the answer in a decimal point 
	double number_one = 0.0;
	double number_two = 0.0;
	char operation;
	//asking user to choose an operator 
	cout << "Please select an operator listed below:\n";
	//a list of operator such as addition subtraction multiplication and divicion
	cout << "Addition (+) \n"
		<< "Subtraction (-) \n"
		<< "Multiplication (*) \n"
		<< "Division (/) \n";
//where the name of the operation will be stored 
	cin >> operation;
		//asking user to enter the first number
		cout << "Enter the first number\n";
	//where the first number will be stored 
		cin >> number_one;
			//asking user to enter the second number
		cout << "Enter the second number\n";
		//where the second number will be stored
		cin >> number_two ;
		//using the swtich operation, replacing the nested statement
		switch (operation) {
			//the first case is addition
		case '+':
			//it will display number one and number two is equal to the answer
			cout << number_one << "+" << number_two << "=" << number_one + number_two << endl;

			break;

		case '-':
			//it will display number one and number two is equal to the answer
			cout << number_one << "-" << number_two << "=" << number_one - number_two << endl;

			break;

		case '*':
			//it will display number one and number two is equal to the answer
			cout << number_one << "*" << number_two << "=" << number_one * number_two << endl;

			break;

		case '/':
			//it will display number one and number two is equal to the answer

			if (number_two != 0) {

				cout << number_one << "/" << number_two << "=" << number_one / number_two << endl;
			}
			//if the user enters 0 for the second number, it will display invalid: Division by zero. 
			else
			{

				cout << "invalid: Division by zero! \n" << endl;
			}
			break;

		}
		return 0;
		}




