#include<stdio.h>
int main(){
    int i,j,fra=1;
    printf("Enter The number:");
    scanf("%d",&j);

    if(j<0){
        printf("The Fraction number is not exit.");
    }
    else{
        for(i=1;i<=j;i++){
            fra*=i;

        }
        ptintf("%d=%d",j,fra);

    }


return 0;
}
