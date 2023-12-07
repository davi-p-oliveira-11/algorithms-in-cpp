/*
3) Create a program that reads the name and salary of an employee, displaying a message at the end.
Example:
Employee's Name: Jane Doe
Salary: 1850.45 USD
Employee Jane Doe has a salary of R$1850.45 in June.
*/

/* */

#include <iostream>
#include <string>
#include <iomanip>

int main () {

  // Variables
  std::string userName;
  float salary;

  // Prompt the user to enter their name and then storing the full line in the Username Variable
  std::cout << "What is the employee name ? ";
  std::getline(std::cin, userName);

  // Prompt the user to enter the value of the salary
  std::cout << "What is the value of the employee salary ? ";
  std::cin >> salary;

  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(2);

  // Display the message
  std::cout << "The employee " << userName << " has a salary of " << salary << " USD" << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();  

  return 0;
}
