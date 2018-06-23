#include<stdio.h>
int main(){
int a,b,c;
printf("Enter The 3 number:");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
    printf("A is gatter Than B.");
}
else if(b>c){
    printf("B is Gatter than C");
}
else
    printf("C is gatter than A and B");

}
