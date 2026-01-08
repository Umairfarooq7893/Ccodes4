/*Author: Umair  
  program: Pass by value  */

// There are several ways to pass arguments to functions in C.
#include <stdio.h>

/*  1. Pass by Value:
    A copy of the data is sent to the function.
    Changes inside the function don’t affect the original data.*/

void change(int x); // function declaration & prototype

int main() {
    int a = 5;  // original variable
    printf("Value of a before function call = %d\n", a);
    
    change(6); // also changes to 10
    change(a);  // calling function by passing value of a
    printf("Value of a after function call = %d\n", a); // original variable remains unchanged
    return 0;
}
void change(int x) {
    x = 10;     // modify original variable using pointer
    printf("Value inside function = %d\n", x);
}


