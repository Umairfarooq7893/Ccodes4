// Author : Umair Farooq
// Program : Matrixfunction
// will be available in group 
#include<stdio.h>
#include<conio.h>
int main(){
    
    return 0;
}
//Function prototypes 
    void takeinput(int a[2][2], int b[2][2]);
    void display(int a[2][2], int b[2][2]);
    void addition(int a[2][2], int b[2][2], int sum[2][2]);
    void multiplication(int a[2][2], int b[2][2], int product[2][2]);
    void printsum(int sum[2][2]);
    void printmul(int product[2][2]);
    
    int main(){
        int a[2][2] ,b[2][2] ,sum[2][2], product[2][2];
    //Take input for matrices a and b
        takeinput(a,b);
    //Display matrices a and b
        display(a,b);       
    //Add matrices a and b, store result in sum
        addition(a, b, sum);
    //Print resultant matrix
        printsum(sum);
    //Multiply matrices a and b, store result in product
        multiplication(a, b, product);
    //Print resultant matrix
        printmul(product);
    return 0;
}
//Function DEFNITION


// 1.Function to take input values for both 2x2 matrices
void takeinput(int a[2][2], int b[2][2]){


    printf("Enter elements for Matrix A (2x2):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
     /*i = 0 ; j = 0 ,scanned value goes to a[0][0]
        i = 0 ; j = 1 ,scanned value goes to a[0][1]
        i = 1 ; j = 0 ,scanned value goes to a[1][0]
        i = 1 ; j = 1 ,scanned value goes to a[1][1]*/
    }
    printf("Enter elements for Matrix B (2x2):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
}
// 2.Function to display a 2x2 matrix
void display(int a[2][2], int b[2][2]){
    
    printf("Elements of Matrix A:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", a[i][j]);
        }
       /* i = 0 ; j = 0 ,displaying value at a[0][0]
         i = 0 ; j = 1 ,displaying value at a[0][1]*/
        printf("\n"); //New line after each row
       /* i = 1 ; j = 0 ,displaying value at a[1][0]
         i = 1 ; j = 1 ,displaying value at a[1][1] */


    }
    
    printf("Elements of Matrix B:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}
// 3.Function to add two 2x2 matrices
void addition(int a[2][2], int b[2][2], int sum[2][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
       /* i = 0 ; j = 0 ,sum[0][0] = a[0][0] + b[0][0]
         i = 0 ; j = 1 ,sum[0][1] = a[0][1] + b[0][1]
         i = 1 ; j = 0 ,sum[1][0] = a[1][0] + b[1][0]
         i = 1 ; j = 1 ,sum[1][1] = a[1][1] + b[1][1] */
        }
    }
}
// 4.Function to multiply two 2x2 matrices
void multiplication(int a[2][2], int b[2][2], int product[2][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            product[i][j] = 0; /* Initialize product matrix elements to 0 
            i =0 ; j=0 ; product[0][0] =0
            i =0 ; j=1 ; product[0][1] =0
            i =1 ; j=0 ; product[1][0] =0
            i =1 ; j=1 ; product[1][1] =0
            */
            for(int k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
                /*when i=0 ; j=0 ; k=0 ; mul[0][0] += a[0][0] * b[0][0]
                  when i=0 ; j=0 ; k=1 ; product[0][0] += a[0][1] * b[1][0]
                  when i=0 ; j=0 ; k=2 ; product[0][0] += a[0][2] * b[2][0]
                product[0][0] = sum of above three products


                when i=0 ; j=1 ; k=0 ; product[0][1] += a[0][0] * b[0][1]
                when i=0 ; j=1 ; k=1 ; product[0][1] += a[0][1] * b[1][1]
                when i=0 ; j=1 ; k=2 ; product[0][1] += a[0][2] * b[2][1]
                product[0][1] is calculated completely here


                when i=1 ; j=0 ; k=0 ; product[1][0] += a[1][0] * b[0][0]
                when i=1 ; j=0 ; k=1 ; product[1][0] += a[1][1] * b[1][0]
                when i=1 ; j=0 ; k=2 ; product[1][0] += a[1][2] * b[2][0]
                product[1][0] is calculated completely here


                when i=1 ; j=1 ; k=0 ; product[1][1] += a[1][0] * b[0][1]
                when i=1 ; j=1 ; k=1 ; product[1][1] += a[1][1] * b[1][1]
                when i=1 ; j=1 ; k=2 ; product[1][1] += a[1][2] * b[2][1]
                product[1][1] is calculated completely here*/
            }
        }
    }
}
// 5.Function to print the resultant 2x2 matrix after addition
void printsum(int sum[2][2]){
    printf("Resultant Matrix after Addition:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        /* i = 0 ; j = 0 ,displaying value at sum[0][0]
          i = 0 ; j = 1 ,displaying value at sum[0][1] */
        printf("\n"); //New line after each row
       /* i = 1 ; j = 0 ,displaying value at sum[1][0]
        i = 1 ; j = 1 ,displaying value at sum[1][1] */
    }
}
// 6.Function to print the resultant 2x2 matrix after multiplication
void printmul(int product[2][2]){
    printf("Resultant Matrix after Multiplication:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", product[i][j]);
        }
        /* i = 0 ; j = 0 ,displaying value at product[0][0]
          i = 0 ; j = 1 ,displaying value at product[0][1] */
        printf("\n"); //New line after each row
       /* i = 1 ; j = 0 ,displaying value at product[1  ][0]
        i = 1 ; j = 1 ,displaying value at product[1][1] */
    }
}
