/*  Author  : Umair Farooq
    Program : Use of Return Statement in C */
#include<stdio.h>
/*In C programming, the return statement serves two primary functions within a function:

=> Terminates Function Execution:

When the return statement is encountered during the
execution of a function, it immediately stops the function's execution.
Any code written after the return statement within that function will not be executed

=> Returns Control and Optionally a Value: 

After terminating the function, return transfers the program's control back to the point where the function was called.
Additionally, if the function has a non-void return type,
the return statement can specify a value or an expression whose result will be sent back to the calling function.

*/

#include <stdio.h>
void stopFunction();
void goBack();
int giveValue();
int add(int a, int b);

int main() {
    int a , b ;
    printf("Enter the given numbers:");
    scanf("%d%d",&a,&b);

    stopFunction();
    goBack();
    printf("Returned value is %d\n", giveValue());
    printf("Sum of %d and %d is %d",a,b,add(a,b));

    return 0;
}
// Example 1: return stops the function
void stopFunction() {
    printf("Hello before return\n");
    return;  // stops here, after on ,nothing will be executed.
    printf("This will not print\n");
}
// Example 2: return sends control back to caller
void goBack() {
    printf("Going back to main\n");
    return;  // returns to main ,after this code is executed
}
// Example 3: return sends back a value
int giveValue() {
    return 10;  // sends back 10
}

// Example 4: Returns the calculated sum
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

