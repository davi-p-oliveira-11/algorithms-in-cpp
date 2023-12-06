/*
2) Create a program that reads a person's name and displays a welcome message to them:
   Example:
   What is your name? Jonh Doe
  Hello John Doe, nice to meet you!"
*/

/**/

#include <iostream>
#include <string>

int main () {
  
  // Variables
  std::string userName;

  // Prompt the user to enter their name and then storing the full line in the Username Variable
  std::cout << "What is your name ? ";
  std::getline(std::cin, userName);
  
  // Display the message
  std::cout << "Hello " << userName << " nice to meet you !" << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();  

  return 0;
}
