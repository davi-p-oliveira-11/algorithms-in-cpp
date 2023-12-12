/*
 11) Develop a logic that reads the values of A, B, and C 
 from a quadratic equation and displays the value of Delta.
*/

#include <iostream>
#include <iomanip>

int main () {

  // Variables
  float valueA, valueB, valueC, delta;

  // Prompt the user to enter the value of A
  std::cout << "Enter the value of A ";
  std::cin >> valueA;

  // Prompt the user to enter the value of B
  std::cout << "Enter the value of B ";
  std::cin >> valueB;

  // Prompt the user to enter the value of C
  std::cout << "Enter the value of C ";
  std::cin >> valueC;

  // calculate the equation
  delta = (valueB * valueB) - 4 * (valueA * valueC);

  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(1);

  // Display the message
  std::cout << "The value of delta is " << delta << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();

  return 0;
}

