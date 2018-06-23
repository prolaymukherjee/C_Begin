#include<stdio.h>
    void sumP(int prolay){
        int n,sum=0;
        for(n=0;n<=prolay;n++){
            sum+=n;

        }
        printf("The total sum of all number %d is: %d\n",prolay,sum);
        return 0;
    }

int main(){
    sumP(200);

return 0;
}

