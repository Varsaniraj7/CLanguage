// Write a C program that demonstrates the use of increment (++) and decrement (--) operators. Start with a variable at 5, decrement it thrice.
// Output:
// Final Value: 6


#include<stdio.h>
main(){
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    a--;
    a--;
    a--;
    printf("Final Value : %d",a);
}