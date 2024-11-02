// 1.4 repetition.cpp : This program will show the use of a calculator by creating one you need to include the operator such as addition, division, subtraction and multiplication. 
// 
//

#include <iostream>
#include <string>
//it prevents from entering cout or cin 
using namespace std; 
    //function 
int main()
{
    //identify the variables and that is number_one and number_two
    int number_one = 0;

    int number_two = 0;
    //where the characters will be stored 
    string operation;

    //displays to the user to type the name of the operator
    cout << "Please type the name of the operator to use the calculator." << endl;
    //displays to the user the operator 
    cout << "Addition" << endl;
    cout << "Subtraction" << endl;
    cout << "Multiplication" << endl;
    cout << "Division \n " << endl;
    //displays to the user to enter the choice of operator 
    cout << "Enter your choice" << endl;
    //where the character will be stored when user enters the name of operator
    cin >> operation;
    //displays to the user to enter the first number
    cout << "Enter the first number" << endl;
    //where the number will be stored
    cin >> number_one;
    //displays to the user to enter the second number 
    cout << "Enter the second number" << endl;
    //where number two will be stored 
    cin >> number_two;
    //using the if statement to create a chain of operation calculation such as: if the user enters addition
    if (operation == "Addition") {
        //the number user entered for one plus the number user entered for two will display the answer 
        cout << "The answer is: \n" << number_one + number_two << endl;
    }
    //using a statement based on the previous operation, if user enters subtraction
    else if (operation == "Subtraction") {
        //it displays the answer when subtracting number one minus number two
        cout << "The answer is: \n" << number_one - number_two << endl;
    }
    //if user enters multiplication as the choice, then the user will see the answer for multiplication
    else if (operation == "Multiplication") {
        //answer will appear when multiplying number one times number two
        cout << "The answer is: \n" << number_one * number_two << endl;
    }
    //Otherwise if user chooses division as the name of the operator then it will display the answer such as: 
    else if (operation == "Division") {
        //if number two is entered as zero given that number two is the denominator and any number cannot be divided by zero. Then it will display an error message. 
        if (number_two != 0) {

            //number one divided by number two will display the answer 
            cout << "The answer is: \n" << number_one / number_two << endl;
        }
        else {
            //if user entered zero for number two then this error will appear on the screen for the user. 
            cout << "Error: cannot be divided by zero\n" << endl;

        }

    }
    else

//another message will be displayed and this ends the error 
cout << "Invalid operation \n" << endl; 



    return 0; 
}
