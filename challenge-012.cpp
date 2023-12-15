/*
12) Create a program that reads the price of a product, 
calculates, and displays its PROMOTIONAL PRICE with a 5% discount.
*/

/**/

#include <iostream>

int main () {

  // Variables
  float productPrice, discount, finalPrice;

  // Prompt the user to enter the price of the product
  std::cout << "Enter the price of the product: ";
  std::cin >> productPrice;

  // Calculate the discount
  discount = productPrice * 0.05;

  // Calculate the final price with the discount applied
  finalPrice = productPrice - discount;

  // Show the message
  std::cout << "The original price of the product is " << productPrice << std::endl;
  std::cout << "The price with discount is " << finalPrice << std::endl;

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();

  return 0;
}
