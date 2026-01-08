/* FUNCTION
## function means a block of code that performs a specific task.
=> used to break down a program into smaller, manageable parts.
=> it can be used multiple times
=> increases code reusuability

## types of functions:
    1. Standard Library Functions: Predefined functions provided by the C standard library
     (e.g., printf(), scanf()), getchar(), putchar(), etc.
    2. User-Defined Functions: Functions created by the programmer to perform specific tasks.

=> function syntax:

     return_type function_name(parameter_list)
     {
          // function body
          // logic to be executed
          return value; // (optional, depending on return_type)
     }
=> Function Declaration/Prototype:

     It informs the compiler about a function's name, return type, and parameters before its actual definition.

=> Function Definition:

     It contains the actual body of the function where the logic is implemented.

## based on return type and arguments, predefined can be further classified as

     1. With return type and with arguments:       int function_name(int arg1, float arg2);
     2. With return type and without arguments:    int function_name();
     3. Without return type and with arguments:    void function_name(int arg1, float arg2);
     4. Without return type and without arguments: void function_name();
 */
#include <stdio.h>
     int a, b; /* Global variables because these variables are used in without argument functions
     because no parameters are passed to them */

     //Function prototypes or declarations
     int sum(int a, int b);
     int subtract();
     void multiply(int a, int b);
     void divide();
//Calling functions in main
     int main() {
          a = 30, b = 0; 
           /* initializing global variables 
          already declared */

          printf("sum = %d\n", sum(a, b));/*without using printf it would not 
          print anything because it is not a void function ,it is returning a value*/

          printf("subtract = %d\n", subtract()); //without using printf it would not print anything     

          multiply(a, b); // will work without printf as it is void
          divide();       // will work without printf as it is void
          return 0;
}

// Function definitions
     int sum(int a, int b) {
          int sum = a + b;
          return sum;     /*just returning the sum ,and storing it in a variable
     do not print it ,unless asked*/

}
     int subtract() {
          int sub = a - b;
          return sub;    /*just returning the sub and storing it in a variable
     do not print it ,unless asked*/
}
     void multiply(int a, int b) {
          int mul = a * b;
          printf("Multiplication: %d\n", mul);  /*just printing the mul ,not returning */
}
     void divide() {
          if (b != 0) {
               int div = a / b;
               printf("Division: %d\n", div);
          } else {
               printf("Division by zero is not allowed.\n");
          }
}

