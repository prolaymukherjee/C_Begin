//The factorial of a negative number doesn't exist. And, the factorial of 0 is 1, 0! = 1
#include<stdio.h>
int main(){
    int a,b,fra=1;
    printf("Enter The value :");
    scanf("%d",&b);

if(b<1){
    printf("The fraction number is not exit:");
}
else{
    for(a=1;a<=b;a++){
        fra*=a;
    }
    printf("%d=%d",b,fra);
}
return 0;
}
