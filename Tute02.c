/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  // Declaring variables.
  float distance, amount;

  printf("Enter the distance travelled : "); // Prompt.
  scanf("%f", &distance); // Ask for user input.

  // Calculating the amount.
  if(distance <= 30)
  {
    amount = distance * 50;
  }
  else
  {
    amount = (30 * 50) + ((distance - 30) * 40);
  }

  // Displaying the amount to be paid.
  printf("You have to pay : %.2f", amount);

  return 0;
}
