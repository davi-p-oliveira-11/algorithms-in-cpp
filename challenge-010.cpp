/*
 10) Create an algorithm that reads the width and height of a wall, 
 calculates and displays the area to be painted, 
 and the amount of paint needed for the job, 
 considering that each liter of paint covers an area of 2 square meters.
*/

#include <iostream>
#include <iomanip>

int main () {

  // Variables
  float height, width, area, amountNeeded;

  // Prompt the user to enter the height of the wall
  std::cout << "Enter the height of the wall in meters ";
  std::cin >> height;

  // Prompt the user to enter the width of the wall
  std::cout << "Enter the width of the wall in meters ";
  std::cin >> width;

  // Calculate the area and the amount of paint needed
  area = width * height;
  amountNeeded = area * 0.5;
  
  // Set the precision to control the number of decimal numbers
  std::cout << std::fixed << std::setprecision(1);

  // Display the message
  std::cout << "The area of the wall to be painted is " << area << " square meters." << std::endl;
  std::cout << "and the amount of paint needed to paint the wall is " << amountNeeded << " liters." << std::endl;
  
  // This ensures that the user sees the message
  std::cout << "Press Enter to exit...";
  std::cin.get();

  return 0;
}
