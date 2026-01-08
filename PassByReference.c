/*   
     2. Pass by Reference
        A reference (address) of the variable is passed.
        Changes made inside the function =>AFFECT<= the original variable.
        Usually done using pointers or arrays.

*/

#include <stdio.h>

void change(int *x); // prototype

int main() {

    int a = 5;

    printf("Value of a before function call = %d\n", a);
// printing Address
    printf("Address of a is %d \n",&a);
// printing value at address
    printf("%d\n",*&a);

    change(&a); // calling function by passing reference

    printf("Value of a after function call = %d\n", a);
    return 0;
}
void change(int *x) {
    *x = 10;
/*  x = &a
    *x means “the value stored at that address”.
    So when you do *x = 10;
    you are changing the value of 'a' directly.
    Output inside function:*/
    printf("Value inside function = %d\n", *x);
}