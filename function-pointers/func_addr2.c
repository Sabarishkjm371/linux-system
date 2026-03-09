// Simplefying function pointers using typedef

#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);


// typedef int * IPTR;
//Now IPTR is int pointer

// int (*FPRT) (int, int); //FPTR - function pointer
typedef int (*FPTR) (int, int); // Now FPTR is datatype

int (* abc(void)) (int, int);
FPTR test(void);

/** The above line can be written as
 * FPTR abc(void);
 */

void main () {
    int i=10, j=20;

    int (*p) (int,int);
    // Above line can be written as FPRT p;
    p = abc();
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int (* abc(void)) (int, int) {
    return sum;
}

//can be written as 
// FPTR abc(void) {
//     return sum;
// }















/**
 * Need return the address of function
 * 
 * If we need to return a address of int, the return will be int pointer,
 * prototype will be:
 *      (datatype pointer)  function_name(params);
 *      int *               func(int, int);
 * 
 * But function pointer is little bit different
 * prototype will be:
 *      abc(void)
 *      (* abc(void))
 *      int (* abc(void)) (int, int);
 *      ---According to above line abc is a void function, it can return address of a function
 *         which will take two integers as params and return integer. 
 * 
 */