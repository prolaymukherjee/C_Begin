#include<stdio.h>
    void squer(void){
        printf("This is the squer number:\n");
        int n;
        for(n=1;n<=10;n++){
            printf("%3d  %3d\n ",n,n*n);
        }

return 0;
    }

void queab(void ){
    printf("--------------------------------");
    printf("\n");

    printf("This is the quebe number:\n");
        int num=0;
    for(  num=1;num<=10;num++){
        printf("%3d %3d\n",num,num*num*num);
    }
    return 0;
}

int main(){
    squer();
    queab();

return 0;
}
