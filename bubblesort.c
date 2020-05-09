#include<stdio.h>   // 11911003 Harsh Mudgal
void main()
{
	printf("Enter tot elements of array ");
	int A[100];
	int n;
	scanf("%d",&n);
	printf("Enter tot elements");
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	int a=n;
	while(n>0)
	{
		for(int i=0;i<n-1;i++)
		{
			if(A[i]>A[i+1]) //comparing each successive element
			{
				int r=A[i];
				A[i]=A[i+1];
				A[i+1]=r;
			}
		}
		n--; // after each loop iteration the max number of the array gets deposeted at the end so..n--
	}
printf("The elements are ");
for(int i=0;i<a;i++)
	printf("%d ",A[i]);
}

	
				
	