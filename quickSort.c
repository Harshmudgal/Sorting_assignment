#include<stdio.h>  // 11911003 Harsh Mudgal
#include<stdlib.h>
void sorting();
void swap(int*,int*);
int part();
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    sorting(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ,",arr[i]);
    }
}
void sorting(int a[],int start,int end)
{
    if(start<end)
    {
        int i=part(a,start,end);
        sorting(a,start,i-1);
        sorting(a,i+1,end);
    }
}
int part(int a[],int start,int end)
{
    int i=start-1;
    int pivt=a[end];
    for(int j=start;j<end;j++)//
    {
        if(a[j]<pivt)
        {
            i++;
            swap(&a[i],&a[j]);
        }    
    }
    swap(&a[i+1],&a[end]);
    return i+1;         //returns the index of pivt at which all the elements are small than
}                       // pivt are placed at the left and greater elements at the right
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}