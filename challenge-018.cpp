/*
 18) Create a program that reads a person's year of birth, 
 calculates their age, and then shows whether they can or cannot vote.
*/

/* */

#include <iostream>

int main () {

  // Variables
  int yearOfBirth, currentYear, userAge;

  // Prompt the user to input their year of birth
  std::cout << "Please provide the year of your birth: ";
  std::cin >> yearOfBirth;

  // Prompt the user to input the current year:
  std::cout << "Please enter the current year: ";
  std::cin >> currentYear;

  // Calculate user age
  userAge = currentYear - yearOfBirth;

  if (userAge >= 18) {
    std::cout << "You can vote " << std::endl;
      // To make sure that the user sees the message
      std::cout << "Press Enter to exit...";
      std::cin.get();
  } else {
    std::cout << "You cannot vote " << std::endl;
      // To make sure that the user sees the message
      std::cout << "Press Enter to exit...";
      std::cin.get();
  }

  // This ensures that the user sees the message
  std::cin.get();
 
  return 0;
}
