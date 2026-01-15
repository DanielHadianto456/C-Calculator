#include <stdio.h>

#define ADDITION_OPTION '+'
#define SUBTRACTION_OPTION '-'
#define MULTIPLICATION_OPTION '*'
#define DIVISION_OPTION '/'

int main()
{
  int inputtedNumber, currentTotal;
  char currentOperationOption;

  printf("\nInput your number here: ");
  scanf("%i", &currentTotal);
  
  getchar();

  printf("\nInput your operation (Supported operations %c, %c, %c, %c): ", 
         ADDITION_OPTION, 
         SUBTRACTION_OPTION, 
         MULTIPLICATION_OPTION, 
         DIVISION_OPTION
        );
  currentOperationOption = getchar();

  if (currentOperationOption != ADDITION_OPTION && 
      currentOperationOption != SUBTRACTION_OPTION && 
      currentOperationOption != DIVISION_OPTION && 
      currentOperationOption != MULTIPLICATION_OPTION
    ) {
    printf("\nInvalid operation type selected!\n");

    return 0;
  }

  printf("\nInput your next number: ");
  scanf("%i", &inputtedNumber);

  switch (currentOperationOption) {
    case ADDITION_OPTION:
      currentTotal += inputtedNumber;

      break;

    case SUBTRACTION_OPTION:
      currentTotal -= inputtedNumber;
      
      break;

    case MULTIPLICATION_OPTION:
      currentTotal *= inputtedNumber;
      
      break;

    case DIVISION_OPTION:
      currentTotal /= inputtedNumber;
      
      break;
  }

  printf("\n%i\n", currentTotal);

  return 0;
}
