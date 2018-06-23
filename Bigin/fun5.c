#include<stdio.h>
int remainder(int x,int y){
    int n;
    while(y!=0){
       n=x%y;
       return  n;
    }

}
int main(){

    int n;
   n= remainder(35 ,2);
    printf("The Remainder is:%d",n);
return 0;
}
