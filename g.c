#include <stdio.h>
int main()
{
      double firstNumber, secondNumber, temporaryVariable;

      printf("Enter first number: ");
      scanf("%lf", &firstNumber);

      printf("Enter second number: ");
      scanf("%lf",&secondNumber);

 

      printf("\nAfter swapping, firstNumber = %.22f\n", firstNumber);
      printf("After swapping, secondNumber = %.22f", secondNumber);

      return 0;
}
