/*
 14) The car rental company needs your help to charge for its services. 
 Write a program that asks for the number of kilometers traveled by a 
 rented car and the number of days it was rented. 
 Calculate the total price to pay, 
 knowing that the car costs 90 USD per day and 0.20USD per kilometer traveled.
*/

/**/

#include <iostream>
#include <iomanip>

int main () {

  // Variables
  int daysRented, distanceTraveled;
  float costPerDay, costPerKm, totalCost;

  // Prompt the user to enter the traveled distance
  std::cout << "How many kilometers were traveled with the rented car ? ";
  std::cin >> distanceTraveled;

  // Prompt the user to enter their salary
  std::cout << "For how many days was the car rented ? ";
  std::cin >> daysRented;

  // Calculate the cost per day
  costPerDay = daysRented * 90;

  // Calculate the cost per distance traveled
  costPerKm = distanceTraveled * 0.20;

  // Calculate the total cost
  totalCost = costPerDay + costPerKm;

  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(2);

  //Display the message
   std::cout << "The customer traveled " << distanceTraveled << " km with the car "<< std::endl;
   std::cout << "rented the car for "<< daysRented << "days, which cost " << std::endl;
   std::cout <<  costPerDay << " USD for the rented days and " << std::endl;
   std::cout <<  costPerKm << " USD for the distance traveled " << std::endl;
   std::cout << "The total cost that the customer must pay is " << totalCost << " USD" << std::endl;
   std::cin.get();

  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();

  return 0;
}
