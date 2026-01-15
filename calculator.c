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

  printf("\nInput your operation (Supported operations %c, %c, %c, %c): ", 
         ADDITION_OPTION, 
         SUBTRACTION_OPTION, 
         MULTIPLICATION_OPTION, 
         DIVISION_OPTION
        );
  currentOperationOption = getchar();

  switch (currentOperationOption) {
    case ADDITION_OPTION:
      
      break;

    case SUBTRACTION_OPTION:
      
      break;

    case MULTIPLICATION_OPTION:
      
      break;

    case DIVISION_OPTION:
      
      break;

    default:

      break;
  }

  return 0;
}
