// Include the iostream library
#include <iostream>
// Use the std namespace
using namespace std;
// Define the main function
int main()
{
// Initialize variables to store the user's input
double num1, num2;
char op;
// Ask the user to enter two numbers
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
// Ask the user to choose an operation
cout << "Choose an operation (+, -, *, /): ";
cin >> op;
// Initialize a variable to store the result
double result;
// Perform the operation based on the user's choice
switch (op)
{
case '+':
result = num1 + num2;
break;
case '-':
result = num1 - num2;
break;
case '*':
result = num1 * num2;
break;
case '/':
// Check if the second number is zero
if (num2 == 0)
{
// Print an error message and exit the program
cout << "Error: Cannot divide by zero." << endl;
return 1;
}
else
{
result = num1 / num2;
}
break;
default:
// Print an error message and exit the program
cout << "Error: Invalid operation." << endl;
return 1;
}
// Print the result
cout << num1 << " " << op << " " << num2 << " = " << result << endl;
// Return 0 to indicate success
return 0;
}
