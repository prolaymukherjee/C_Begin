#include<stdio.h>
int main(){
    int n;
    printf("Enter The year:");
    scanf("%d",&n);
    if((n%4)==0 && (n%100)==0 || (n%400)==0){
        printf("The Year is Leap Year:");

    }
    else
        printf("The Year is not a leap Year:\n");

}
