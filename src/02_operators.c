#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.

TODOs:
1) Ask the user for two integers a and b.
2) Print:
   - a + b, a - b, a * b
   - a / b (integer division) AND a % b (remainder)
     - If b == 0, do not divide (print a warning).
3) Compare a and b and print:
   - "a is greater", "b is greater", or "they are equal"
4) Logical checks:
   - Print if BOTH numbers are positive
   - Print if AT LEAST ONE number is negative

Hints:
- Comparisons: > < == !=
- Logical: && || !
*/

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    // TODO: scanf a
    printf("Enter integer b: ");
    // TODO: scanf bFDFFDFDF

    printf("\n=== Arithmetic ===\n");
    // TODO: print +, -, *

    // TODO: division + modulo only if b != 0
    // else print "Cannot divide by zero."

    printf("\n=== Comparison ===\n");
    // TODO: compare and print

    printf("\n=== Logical checks ===\n");
    // TODO: both positive?
    // TODO: at least one negative?

    return 0;
}
