#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter the element of number: ");
    scanf("%d ",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Error!memory not allocated ");
        exit(0);

    }
    printf("Enter  element of array: ");
    for(i=0;i<n;++i)
    {
        scanf("%d ",ptr+i);
        sum+=*(ptr+i);
    }
}
