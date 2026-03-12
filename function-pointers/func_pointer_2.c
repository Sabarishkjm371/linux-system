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
    int (*p[4]) (int, int); // Declare function pointer
    int a=100, b=20;
    p[0] = sum;
    p[1] = sub;
    p[2] = mul;
    p[3] = div;

    int i;
    for (i=0; i<4; i++) {
        printf("%d ", p[i](a,b));
    }
    printf("\n");
    
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