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

    int k = (*p) (5,10);    //Method 1
    printf ("k = %d \n", k);

    int result = p(5,10);   //Method 2
    printf ("Result = %d\n", result);

    int m = sum(5,10);      //Method 3
    printf ("m = %d \n", m);
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