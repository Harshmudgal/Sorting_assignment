#include<stdio.h>  // 11911003 Harsh Mudgal
#include<stdlib.h>
#include<string.h>
void mergeArray(char arr[],int start,int mid,int last) // this function adds 2 sorted array
{
    int size1=mid-start+1; // size of 1st array
    int size2=last-mid;    //size of 2nd array
    char arr1[size1];
    char arr2[size2];
    int i,j,k;             // i=first array index ;j=second array index ;k=original array index
    k=start;

    for(i=0;i<size1;i++)
    arr1[i]=arr[start+i];

    for(j=0;j<size2;j++)
    arr2[j]=arr[mid+1+j];

    k=start;
    i=0;
    j=0;
    while(i<size1 && j<size2)//comparing every element of both the sorted array and putting them into original array 
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i < size1)  //for elements left in first array
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j < size2)  // for elements left in second array
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergesort(char arr[],int start,int last)// for dividing the array into 2 parts using recursion into simplest unit
{
    if(start<last)// when start==last i.e each and every element has been simplified into single unit
    {
    int mid=(strt+last)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,last);
    mergeArray(arr,start,mid,last);
    }
}
void traverse(char arr[],int n)
{
    printf("\n");
    printf("%s",arr);
}
int main()
{
    int n;
    printf("Enter total number of array elements");
    fflush(stdin);
    scanf("%d",&n);
    char arr[100];
    scanf("%s",&arr);
    traverse(arr,n);
    mergesort(arr,0,n-1);
    traverse(arr,n);
    return 0;
}