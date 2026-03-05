 ### Example - 1
 #### If we need to return a address of int, the return will be int pointer,

 prototype will be:
 *      (datatype pointer)  function_name(params);
 *      int *               func(int, int);

 #### But function pointer is little bit different
 
 prototype will be:
 *      abc(void) 
 *      (* abc(void))
 *      int (* abc(void)) (int, int);

According to above line abc is a void function, it can return address of any function which will take two integers as params and return integer. 

-----------


### Example - 2
 *      int (* mno(int)) (char);
 According to above line mno is a function it can return address of any function which will take one char and return integer.

 In other words mno is not returning int, it returns address of a function which takes char as argument and returns int.

 -----------


 ### Example - 3
 *      char * (* q(int, char)) (int);
 According to above line q is a function it can return address of any function which will take one int and return char pointer.

 In other words q is a function which takes int and char as arguments and returns a pointer to a function (that function will take int as argument and return char *)

   ### Example - 4

    char * abc (int);

 According to above line abc is normal func which returns char pointer.


 ### Club ex-4 & 5

    char * abc (int);
    char * (* q(int, char)) (int) {
        return abc;
    }

This will return the address of abc
 