#include<stdio.h>
int main(){
    int n;
    printf("Enter The number of the Exam:");
    scanf("%d",&n);
    if(n>=80 && n<=100){
        printf("Got A+");
    }
    else if(n>=70 && n<=79){
        printf("Got A");
    }
    else if(n>=60 && n<=69){
        printf("Got A-");
    }
    else if(n>=50 && n<=59){
        printf("Got B");
    }
    else if(n>=40 && n<=49){
        printf("Got D");
    }
    else if(n>=33 && n<=39){
        printf("Got E");
    }
    else if(n>=0 && n<=32){
        printf("You Fail.");
    }

}
