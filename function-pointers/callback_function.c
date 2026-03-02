#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);

int callBackFunc(int a, int b, int(*p)(int,int));

/**
 * Callback function will holds the address of a function as one of the parameter.
 * 
 * There some cases where we cannot call function directly, so in such cases function pointer
 * useful.
 */

void main () {
    int i=10, j=20;

    int result = callBackFunc(i,j, sum);
    printf ("Result = %d \n", result);
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int callBackFunc(int a, int b, int(*p)(int,int)) {
    int r;

    r = (*p)(a,b); //Method 1

    r = p(a,b); //Method 2
    return r;
}