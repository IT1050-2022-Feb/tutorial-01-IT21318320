/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  // Declaring variables.
  float mark1, mark2;
  float average;

  printf("Enter the first mark : "); // Prompt.
  scanf("%f", &mark1); // Ask for user input.

  printf("Enter the second mark : ");
  scanf("%f", &mark2);

  // Calculate the average.
  average = (mark1 + mark2) / 2;

  // Display the average.
  printf("The average is : %.2f", average);

  return 0;
}

