/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  // Declaring variables.
  int number, count, sum = 0;

  printf("Enter an integer : "); //Prompt.
  scanf("%d", &number); // Ask for user input.

  // Calculate the sum of the numbers.
  for(count = number; count > 0; --count)
  {
    sum = sum + count;
  }

  // Displaying the sum of the numbers.
  printf("The sum is : %d", sum);
  
  return 0;
}

