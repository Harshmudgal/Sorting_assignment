#include<stdio.h>  // 11911003 Harsh Mudgal
#include<string.h>
#include<stdlib.h>
struct node{
    char name[20];
    struct node*left;
    struct node*right;
}*head;
void insertNode(struct node*q,struct node*z)
{
    if(strcmp(q->name,z->name)<=0)
    {
        if(z->left==NULL)
        z->left=q;
        else
        {
            insertNode(q,z->left);
        }
    }
    else
    {
        if(z->right==NULL)
        z->right=q;
        else
        {
            insertnode(q,z->right);
        } 
    }
}
struct node *createNode()
{
    struct node*q=(struct node*)malloc(sizeof(struct node*));
    q->left=NULL;
    q->right=NULL;
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
    head->left=NULL;
    head->right=NULL;
    head=createNode();
    traverse(head);
    char x[20];
    struct node*p=(struct node*)malloc(sizeof(struct node));
    scanf("%s",x);
    p->left=NULL;
    p->right=NULL;
    insertNode(p,head);
    traverse(head);
}
