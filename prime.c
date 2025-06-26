
#include <stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;	
		for(j=1;j<=i;j++)

			if(i%j==0)
			{
				count++;
			}
		if (count==2)
		{
			printf("%d is Prime \n",i);
		}
		else

		printf("%d is not a Prime\n",i);
	}
}

