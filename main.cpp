/*
Name: 				Bipin Shrestha
Project Name: 		CSC450-CT1-Module1
Project Purpose: 	To create a interactive program that takes three input from user. Stores the input and displays the contents of the variables and pointers.
Algorithm Used: 	Program has simple function to create integer variables, prompt the user to obtain the user information, and stores them in the created
					integer variables. Program then creates three integer pointers using 'new' operator and assign the values of integer variables  to integer
					pointers. Program displays the contents of both variables and pointers and then deallocate the dynamically allocated memory using the
					'delete' operator. Program returns 0 to indicate successful execution.
Program Inputs: 	Program requires the user to enter three different integer values.
Program Outputs: 	Program displays the values stored in variables and also displays the values pointed by the pointers.
Program Limitations: The program assumes user to input valid integer values and if user inputs non-integer, more or less than three integer values, program
					might result unexpected behavior.
Program Errors: 	The program will encounter error if the user inputs non-integer value.

====================================
*/
#include <iostream>

int main (){
	// Declare variables to store the user inputs
	int data1, data2, data3;
	// Prompt for user input
	std::cout << "Enter three different number of your choice : ";
	std::cin >> data1 >> data2 >> data3;
	// Create integer pointers to dynamic memory
	int *pointerA = new int(data1);
	int *pointerB = new int(data2);
	int *pointerC = new int(data3);
	// Display the contents of variables and pointer
	std::cout << "\nValues entered by users : \n";
	std::cout << "data1 : " << data1 << "\t data2 : " << data2 << "\t data3 : " << data3 << std::endl;
	std::cout << "\nValues stored in pointers : \n";
	std::cout << "pointerA : " << *pointerA << "\t pointerB : " << *pointerB << "\t pointerC : " << *pointerC << std::endl;
	// Delete operator to manage memory
	delete pointerA;
	delete pointerB;
	delete pointerC;

	return 0;
}
