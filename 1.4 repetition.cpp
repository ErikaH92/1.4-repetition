// 1.4 repetition.cpp : This program will show the use of a calculator by creating one you need to include the operator such as addition, division, subtraction and multiplication. 
// 
//

#include <iostream>
#include <string>

using namespace std; 
    
int main()
{

    int number_one = 0;

    int number_two = 0;

    string operation;


    cout << "Please type the name of the operator to use the calculator." << endl;

    cout << "Addition" << endl;
    cout << "Subtraction" << endl;
    cout << "Multiplication" << endl;
    cout << "Division \n " << endl;

    cout << "Enter your choice" << endl;

    cin >> operation;

    cout << "Enter the first number" << endl;

    cin >> number_one;

    cout << "Enter the second number" << endl;

    cin >> number_two;

    if (operation == "Addition") {

        cout << "The answer is: \n" << number_one + number_two << endl;
    }

    else if (operation == "Subtraction") {

        cout << "The answer is: \n" << number_one - number_two << endl;
    }

    else if (operation == "Multiplication") {

        cout << "The answer is: \n" << number_one * number_two << endl;
    }

    else if (operation == "Division") {

        if (number_two != 0) {


            cout << "The answer is: \n" << number_one / number_two << endl;
        }
        else {

            cout << "Error: cannot be divided by zero\n" << endl;

        }

    }
    else


cout << "Invalid operation \n" << endl; 



    return 0; 
}
