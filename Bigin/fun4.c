#include<stdio.h>
int chag(int i,int j,int k){
    int result=0;
    result=i+j+k;
    return result;
}

int main(){
    int result;
    result=chag(15,10,45);
    printf("result is  %d",result);
    return 0;
}
