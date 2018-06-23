#include<stdio.h>
int main(){
    double i,N;
    printf("Enter Number:");
    scanf("%d",&N);

    for(i=1;i<=N;i++){

    if(i==1){
        printf("1+");
      }
    else if(i==N){
        printf("+1/%d",N);
      }
      else{
        printf("1/%d",i );

      }
   }
}
