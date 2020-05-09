#include<stdio.h>
void main()
{
	printf("Enter tot elements of array ");// 11911003 Harsh Mudgal
	int ar[100];
	int n;
	scanf("%d",&n);
	printf("Enter tot elements");
	for(int i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(int j=1;j<n;j++)
	{
		int x=j;
		while(x>0&&ar[x-1]>ar[x]) //we assume a pivot element ar[j]and then compare it with all the elements before that index
		{
			int z=ar[x];
			ar[x]=ar[x-1];
			ar[x-1]=z;
			x--;
		}
	}
	printf("The sorted elements are ");
	for(int i=0;i<n;i++)
		printf("%d ",ar[i]);
}

			
			
		