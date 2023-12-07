/*
5) Create a program that reads a student's two grades in a subject and displays their average on the screen.
Example:
Grade 1: 4.5
Grade 2: 8.5
The average between 4.5 and 8.5 is equal to 6.5.
*/

/* */

#include <iostream>
#include <iomanip>

int main () {

  // Variables
  float grade1, grade2, average;

  // Prompt the user to enter the first grade
  std::cout << "Enter the first grade: ";
  std::cin >> grade1;

  // Prompt the user to enter the first number
  std::cout << "Enter the second grade: ";
  std::cin >> grade2;

  // Calculate the average between the two grades
  average = ( grade1 + grade2 ) / 2 ;
 
  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(1);

  // Display the message
  std::cout << "The average of " << grade1 << " and " << grade2 << " is equal to: " << average << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();  

  return 0;
}
