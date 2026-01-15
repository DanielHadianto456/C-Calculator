#include <stdio.h>

#define ADDITION_OPTION '+'
#define SUBTRACTION_OPTION '-'
#define MULTIPLICATION_OPTION '*'
#define DIVISION_OPTION '/'

int main()
{
  int inputtedNumber;
  char currentOperationOption;

  printf("\nInput your number here: ");
  scanf("%i", &inputtedNumber);
  
  getchar();

  printf("\nInput your operation (Supported operations '+', '-', '*', '/'): ");
  currentOperationOption = getchar();

  return 0;
}
