/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,cal;
  float avg;

  printf("Enter mark 1:\n");
  scanf("%d",&mark1);

  printf("Enter mark 2:\n");
  scanf("%d",&mark2);

  cal=mark1+mark2;
  avg=cal/2;

  printf("Avarege : %.2f",avg);
  
  return 0;
}

