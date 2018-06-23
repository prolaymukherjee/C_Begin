#include<stdio.h>
void sum(void){
    int sum=0;
     int n;
     for(n=0;n<=100;n++){
        sum=sum+n;
     }
      printf("The total sum of the 100 number: %d " ,sum);
}
int main(){
    sum();
}

