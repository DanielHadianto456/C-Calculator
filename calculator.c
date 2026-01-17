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

    getchar();
  }; 

  printf("\n%i\n", currentTotal);

  return 0;
}
