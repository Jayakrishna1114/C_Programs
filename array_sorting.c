
#include <stdio.h>
int main()
{
	int arr[100];
	int n,i,j,temp;
	printf("Enter no of Elements:");
	scanf("%d",&n);

	printf("Enter Array Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0; i < n-1; i++)
		for(j=0;j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	printf("Sorted Array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

