/*
6) Create a program that reads an integer and displays its predecessor and successor.
Example:
Enter a number: 9
The predecessor of 9 is 8
The successor of 9 is 10
*/

/* */

#include <iostream>

int main () {

  // Variables
  int number, predecessor, successor;

  // Prompt the user to enter a number
  std::cout << "Enter a number: ";
  std::cin >> number;

  // Calculate the predecessor and successor
  predecessor = number - 1;
  successor = number + 1;

  // Display the message
  std::cout << "The predecessor of " << number << " is " << predecessor << std::endl;
  std::cout << "The successor of " << number << " is " << successor << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get(); 

  return 0;
}
