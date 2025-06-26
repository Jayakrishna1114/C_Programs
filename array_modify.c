#include <stdio.h>
int main()
{
	int size,arr[100];
	int i, index , newVal;
	printf("Enter size of array : ");
	scanf("%d",&size);
	printf("Enter Array Elemnts:\n");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("\nEnter index to modify / insert at(0 to %d) :",size-1);
	scanf("%d",&index);
	
	printf("\n Enter NewValue : ");
	scanf("%d",&newVal);

	for(i = size; i > index;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[index] = newVal;
	size++;



	printf(" Modified Array :\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}

