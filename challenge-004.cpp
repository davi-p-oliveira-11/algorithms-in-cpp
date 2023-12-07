/*
4) Develop an algorithm that reads two integers and displays their sum.
Example:
Enter a value: 8
Enter another value: 5
The sum of 8 and 5 is equal to 13.
*/

/* */


#include <iostream>

int main () {
  
  // Variables
  int num1, num2, sum;

  // Prompt the user to enter the first number
  std::cout << "Enter one number: ";
  std::cin >> num1;

  // Prompt the user to enter the second number
  std::cout << "Enter another number: ";
  std::cin >> num2;

  // Sum the two numbers
  sum = num1 + num2;

  // Display the message
  std::cout << "The sum of " << num1 << " and " << num2 << " is equal to: " << sum << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();  

  return 0;
}
