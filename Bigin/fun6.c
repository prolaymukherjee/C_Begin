#include <stdio.h>
int factial(int n){

    if(n==1){
        return 1;
    }
    return n*factial(n-1);
}
int main(){
    int x=3;
    int result=factial(x);
    printf(" the factrial 3 is: %d\n ",result);

return 0;
}
