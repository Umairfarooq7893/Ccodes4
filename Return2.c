/*  Author  : Umair Farooq
    Program : Use of return
*/
#include <stdio.h>

int checkNumber(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkNumber(num) == 1){
    printf("Positive number\n");
    }else if (checkNumber(num) == -1){
    printf("Negative number\n");
    }else if (checkNumber(num) == 0){
    printf("Number is Zero\n");
    }
    return 0;
}
int checkNumber(int n) {
    if (n > 0) {
        return 1;  // returns 1 if positive
    } else if (n < 0) {
        return -1; // returns -1 if negative
    } else {
        return 0;  // returns 0 if zero
    }
    printf("Hello Brother\n"); 

}




 