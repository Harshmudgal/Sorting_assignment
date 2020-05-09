#include<stdio.h>  // 11911003 Harsh Mudgal
#include<string.h>
#include<stdlib.h>
struct node{
    char name[20];
    struct node*left;
    struct node*right;
}*head;
struct node *createNode()
{
    struct node*q=(struct node*)malloc(sizeof(struct node*));
    char x[20];
    scanf("%s",x);
    if(strcmp(x,"No")==0)  // x==NO returns 0 i.e ture =0 
    return NULL;
    strcpy(q->name,x);     // copies x to name in struct node
    printf("Enter left elements of %s",x);
    q->left=createNode();
    printf("Enter right element of %s",x);
    q->right=createNode();
    return q;  
}
void traverse(struct node*p)
{
    if(p!=NULL)
    {
        traverse(p->left);
        printf("%s ,",p->name);
        traverse(p->right);
    }    
}
int main()
{
    head=(struct node*)malloc(sizeof(struct node));
    head=createNode();
    traverse(head);
}