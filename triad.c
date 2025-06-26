#include <stdio.h>
int main()
{
	int m,n,p,num;
	int i,k,d1,d2,d3;
//	printf("Enter num value :");
//	scanf("%d",&num);
	for ( num =100; num <= 999;num++)
	{

	       for(i= num; i <= 3*num; i+=num)
	       {
		       k = i;
		       d1 = k % 10; 
		       k/=10;

		       d2 = k % 10;
		       k/=10;

		       d3 = k % 10;
		       
		       if(d1==d2 || d2 == d3 || d3 == d1)
			       goto nextnum;
	       }

	       int digits[10] = {0};
	       int values[3] ={num,num*2,num *3};
	       for( i = 0; i <3; i++)
	       {
		       k = values[i];
		       while (k > 0)
		       {
			       int d = k % 10;
			       if (digits[d])
				       goto nextnum;
			       digits [d] =1;
			        k /=10;
		       }
	       }
	       printf("%d %d %d\n",num,num*2,num*3);
               nextnum: ;
	}
          
}

