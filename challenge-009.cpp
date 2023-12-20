/*
 9) Create an algorithm that reads how much money a person has in their wallet
 (in R$) and shows how many dollars they can buy. Consider US$1.00 = R$3.45.
*/

#include <iostream>
#include <iomanip>

int main () {

  // Variables
  float availableBRL, valueUSD;

  // Prompt the user to enter BRL value
  std::cout << "Enter a value in BRL: ";
  std::cin >> availableBRL;

  // Converting BRL to USD
  valueUSD = availableBRL / 3.45;

  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(2);

  // Display the message
  std::cout << "You can buy a total of " << valueUSD << " USD" << std::endl;
  
  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();

  return 0;
}
