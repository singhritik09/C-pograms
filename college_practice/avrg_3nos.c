#include<stdio.h>

int main()
{
  float num1, num2, num3;
  float sum, average;
  printf("Enter three Numbers: ");
  scanf("%f %f %f",&num1, &num2, &num3);

  sum = num1 + num2 + num3;

  average = sum / 3;

  printf("Average=%f\n",average );

  return 0;
}