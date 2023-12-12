/*
 7) Create an algorithm that reads a real number and displays on the screen its double and one-third.
    Example:
    Enter a number: 3.5
    The double of 3.5 is 7.0
    One-third of 3.5 is 1.16666
*/

#include <iostream>
#include <iomanip>

int main () {

  // Variables
  float number, doubleOf, thirdOf;

  // Prompt the user to enter a number
  std::cout << "Enter a number: ";
  std::cin >> number;
  
  // Make the operations to find the double and third
  doubleOf = number * 2;
  thirdOf = number / 3;

  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(2);

  // Display the message
  std::cout << "The double of " << number << " is " << doubleOf << std::endl;
  std::cout << "The third part of " << number << " is " << thirdOf << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();

  return 0;
}
