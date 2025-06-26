#include <stdio.h>
int main()
{
	int i,size,pos,val;
	printf("Enter Size of array :");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter Array Elements : ");
	for( i=0; i< size; i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("Enter Array : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter position to insert value from ( 0 to %d):",size);
	scanf("%d",&pos);
	printf("\nEnter value to insert :");
	scanf("%d",&val);
	size++;
     
	 // INSERTION 
	for(i = size; i>pos;i--)
	{
		arr[i] = arr[i-1];
	}
		arr[pos] = val;
	
	printf("Insertion Array : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	} 
	printf("\n");
	
	//DELETION
	if(i == pos)
		arr[i] = arr[i +1];
	size--;
	printf("Deletion Array:");
	for( i =0; i < size;i++)

	
	{
		printf("%d ",arr[i]);
	}

	printf("\n");
}



