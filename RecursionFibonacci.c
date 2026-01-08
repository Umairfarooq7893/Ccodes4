/*
    Author  : Umair
    Program : Fibonacci series using recursion
*/
#include <stdio.h>

// Function prototype for recursive Fibonacci function
int fibonacci(int n);

int main() {
    int N = 7;  // Number of terms to print in the Fibonacci series

    printf("Fibonacci sequence up to %dth term:\n", N);

    // Loop to print Fibonacci numbers from 0th to (n-1)th term
    for (int i = 0; i < N; i++)
        printf("%d ", fibonacci(i));   // Call recursive function for each term

    return 0;
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) 
        return 0;   // Base case 1: Fibonacci of 0 is 0
    if (n == 1) 
        return 1;   // Base case 2: Fibonacci of 1 is 1

    // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n-1) + fibonacci(n-2);
}
