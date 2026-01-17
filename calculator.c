#include <stdio.h>
#include <stdbool.h>

#define ADDITION_OPTION '+'
#define SUBTRACTION_OPTION '-'
#define MULTIPLICATION_OPTION '*'
#define DIVISION_OPTION '/'
#define FINISHED_OPTION '='

bool validateInput(char operationInput)
{
  return (
    operationInput == ADDITION_OPTION ||
    operationInput == SUBTRACTION_OPTION ||
    operationInput == MULTIPLICATION_OPTION ||
    operationInput == DIVISION_OPTION ||
    operationInput == FINISHED_OPTION
  );
}

int calculateTotal(int total, int numberInput, char operationType)
{
  
    switch (operationType) {
      case ADDITION_OPTION:
        return total + numberInput;

      case SUBTRACTION_OPTION:
        return total - numberInput;
 
      case MULTIPLICATION_OPTION:
        return total * numberInput;

      case DIVISION_OPTION:
        if (numberInput == 0) {
          printf("\nCan't divide by 0!");
        
          return total;
        }

        return total / numberInput;

      default:
        return total;
    }
}

int main()
{
  int inputtedNumber, currentTotal;
  char currentOperationOption;

  printf("\nInput your number here: ");
  scanf("%i", &currentTotal);
  
  getchar();

  while (true) {
    printf("\nInput your operation (Supported operations %c, %c, %c, %c, %c): ", 
           ADDITION_OPTION, 
           SUBTRACTION_OPTION, 
           MULTIPLICATION_OPTION, 
           DIVISION_OPTION,
           FINISHED_OPTION
         );
    currentOperationOption = getchar();

    if (!validateInput(currentOperationOption)) {
      printf("\nInvalid operation type selected! Selected = %c\n", currentOperationOption);

      continue;
    }

    if (currentOperationOption == FINISHED_OPTION) {
      break;
    }

    printf("\nInput your next number: ");
    scanf("%i", &inputtedNumber);

    currentTotal = calculateTotal(currentTotal, inputtedNumber, currentOperationOption);

    getchar();
  }; 

  printf("\n%i\n", currentTotal);

  return 0;
}
