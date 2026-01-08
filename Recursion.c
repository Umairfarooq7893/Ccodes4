/*
    Author  : Umair 
    program : Recursion
  
    Stopping condition should be always there to 
    Prevents infinite recursion

*/
#include <stdio.h>
int factorial(int n); // function prototype

int main() {
    int num = 5;
    int res = factorial(num);
    printf("Factorial of %d is %d\n",num,res);
    return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1)   // when n = 1 or n =0, stop recursion
        return 1;
    else                    
        return n * factorial(n - 1); // Recursive case
}

