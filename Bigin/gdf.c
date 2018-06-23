#include<stdio.h>
#include<conio.h>
void square_num(void)
{
    int num;
    printf("\nNUMBER OF SQUARE\n\n\n");
    for(num=1;num<=10;num++)
    printf("%3d   %3d\n",num,num*num);


}
void cube_num(void)
{
    int num;
    printf("\n\nNUMBER OF CUBE\n");
    for(num=1;num<=10;num++)
    printf("%3d   %3d\n ",num,num*num*num);

}
void main(void)
{
    printf("\n\nPress any key to see square number from value 1 to 10 ");
    square_num();
    printf("\n\n\nPress any key to see cubie number 1 to 10 ");
    cube_num();
}

