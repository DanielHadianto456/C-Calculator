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

    default:
      printf("\nOops! Invalid input detected!");
      return 0;
  }

  printf("\n%i\n", currentTotal);

  return 0;
}
