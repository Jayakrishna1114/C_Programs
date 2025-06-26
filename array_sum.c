#include <stdio.h>
int main()
{
	int size,i;
	printf("Enter the size of arrays:");
	scanf("%d",&size);
	int a[size],b[size],sum[size];
	int *p1 = a,*p2 = b, *p3 = sum;
	printf("Enter first array elements:");
	for(i=0; i < size; i++)
	{
		scanf("%d",(p1+i));
	}
	printf("Enter Second array elements:");
       for(i=0; i< size; i++)
       {
           scanf("%d",(p2+i));
       }
          for(i=0; i < size; i++)
	  {
            *(p3+i) = *(p1 + i) + *(p2+i);
	  }
               printf("Sum of the two arrays :\n");
               for(i = 0; i < size; i++)
	       {
	         printf("%d ", *(p3 + i));
	       }
               printf("\n");
               return 0;
}	       
