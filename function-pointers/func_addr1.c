// Refer README_func_addr.md before jumping here

#include <stdio.h>

int (* mno(int))(char);

// mno is a func which takes int and ret pointer to function (it ret addr of one func)
// mno returns address of func, that func takes one char and ret int

int (*p) (char);    //function pointer declaration

    // p will hold address returned by mno

int test_func(char ch);

void main() {

    p = mno(10);

    int result = p('A');
    printf("result = %d \n", result);
}

int test_func(char ch) {
    return ch + 10;
}

int (* mno(int))(char) {
    return test_func;
}