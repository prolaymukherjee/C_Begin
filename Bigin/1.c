#include<stdio.h>
#include<stdlib.h>

struct List
{
    int val;
    struct List *next;
};
typedef struct List List;

void insertFront(List **head, int num)
{
    List *temp;
    temp=(List*)malloc(sizeof(List));
    temp->val=num;
    temp->next=*head;
    *head=temp;
}
void insertEnd(List **head,int num)
{
    List *temp,*t;
    temp=(List*)malloc(sizeof(List));
    temp->val=num;

    t=*head;
    while(t->next)
    {
        t=t->next;
    }
    t->next=temp;
    temp->next=NULL;
}
void deleteFront(List **head)
{
    List *temp;
    temp=*head;
    *head=temp->next;
    free(temp);
}
void deleteEnd(List **head)
{
    List *p,*q;
    p=*head;
    while(p->next)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    free(p);
}
void Display(List *head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->val);
        head=head->next;
    }
}

int main()
{
    List *root=NULL;
    int num1,num2,num3;
    num1=12;
    num2=15;
    num3=18;
    insertFront(&root,num1);
    insertEnd(&root,num2);
    insertEnd(&root,num3);

    Display(root);
    deleteFront(&root);

    printf("\n\n");
    Display(root);
    insertFront(&root,10);

    printf("\n\n");
    Display(root);
    deleteEnd(&root);

    printf("\n\n");
    Display(root);
    insertEnd(&root,16);

    printf("\n\n");
    Display(root);
    insertEnd(&root,17);

    printf("\n\n");
    Display(root);
return 0;
}
