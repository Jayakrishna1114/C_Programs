#include <stdio.h>
int main()
{
	int arr[50],n,i,temp;
	printf("Enter no of aray elements :");
	scanf("%d",&n);
	printf("Enter %d elements :\n",n);
	for(i =0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i<n/2;i++)
	{
		temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
	printf("Reversed Array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 1;
}

