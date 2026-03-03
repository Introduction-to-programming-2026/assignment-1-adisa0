#include <stdio.h>

/*
TASK 1: Data Types
Goal: Practice basic C types and printing.

TODOs:
1) Print the size (in bytes) of:
   - int, long, long long, float, double, char
2) Ask the user for:
   - age (int)
   - height in meters (double)
   - first letter of their name (char)
3) Print the values back in a nice sentence.

Hints:
- Use sizeof(type)
- Use scanf carefully:
  - int: %d
  - double: %lf
  - char: " %c" (notice space before %c to skip newline)
*/

int main(void) {
    printf("=== Sizes of Data Types (bytes) ===\n");

   printf("int: %zu\n", sizeof(int));
printf("long: %zu\n", sizeof(long));
printf("long long: %zu\n", sizeof(long long));
printf("float: %zu\n", sizeof(float));
printf("double: %zu\n", sizeof(double));
printf("char: %zu\n", sizeof(char));

    int age = 0;
    double height = 0.0;
    char firstLetter = '?';

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%lf", &height);

    printf("Enter the first letter of your name: ");
    scanf(" %c", &firstLetter);

    printf("\n=== Summary ===\n");
    printf("The person with initial %c is %d age and high %.2f meter.\n", firstLetter, age, height);
    return 0;
}
