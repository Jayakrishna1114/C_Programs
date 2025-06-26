#include<stdio.h>
int main()
{
	int num,n,dig,sum,cube;
	printf("Armstrong Numbers between 100 and 999 :\n");
	for(num = 100;num<=999;num++)
	{
		n = num;
		sum = 0;
		while(n>0)
				{
				  dig = n %10;
				  cube = dig*dig*dig;
				  sum = sum + cube;
				  n = n/10;
				}
	       if(sum == num)
	       {
	   
		       printf("%d\n",num);
	       }
	}
	return 0;
}


