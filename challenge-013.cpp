/*
 13) Create an algorithm that reads an employee's salary, 
 calculates, and displays their new salary with a 15% increase."
*/

/* */

#include <iostream>
#include <iomanip>

int main () {
  
  // Variables
  float salary, raise, newSalary;

  // Prompt the user to enter their salary
  std::cout << "Enter the value of your salary: ";
  std::cin >> salary;

  // Calculate the raise 
  raise = salary * 0.15;

  // Calculate new salary
  newSalary = salary + raise;

  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(2);

  // Display the message
  std::cout << "The value of the new salary is " << newSalary << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();


  return 0;
}
