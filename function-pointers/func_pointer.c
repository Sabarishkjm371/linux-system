#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

/**
 * Func pointer holds address of a function,
 * Similarly how int pointer holds address of a int variable
 */

void main () {
    int (*p) (int, int); // Declare function pointer
    p = sum;

    int result = p(5,10);
    printf ("Result = %d\n", result);
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}