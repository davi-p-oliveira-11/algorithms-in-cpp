/*
 1) Write a program that displays the message 'Hello, World!' on the screen
*/

/* =================================================================================================================================================== */

#include <iostream>

int main () {
  
  // Show the Hallo Mars message
  std::cout << "Hallo, Mars"<< std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();  

  return 0;
}
