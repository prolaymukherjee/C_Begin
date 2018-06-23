// Positive integers 1,2,3...n are known as natural numbers
#include<stdio.h>
int main(){
    int sum=0,i,j;
    printf("Enter the value:");
    scanf("%d",&j);

    for(i=1;i<=j;i++){
        sum+=i;
    }
    printf("The Total sum of the %d",sum);
}
