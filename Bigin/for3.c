//Fibonacci Series up to n number of terms in c;

#include<stdio.h>
int main(){
    int i,j,s,a=0,b=1;
    printf("Enter The Length of the number:");
    scanf("%d",&j);

    printf("%d %d",a,b);

    for(i=0; i<j; i++){

        s=a+b;
        a=b;
        b=s;
        printf(" %d ",s);
    }


return 0;
}
