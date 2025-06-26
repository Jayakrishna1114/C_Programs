#include<stdio.h>
int main()
{
	int n,i;
	int a =0,b=1,next;
	printf("Enter no of terms:");
	scanf("%d",&n);
	printf("Fibnoci Series\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a);

		next = a + b;
		a = b;
		b = next;
	}
	printf("\n");
	return 0;

//	for(i=0;i<n;i++)
//		printf("%d\t",fib(i));
//	printf("\n");
//}
//int fib(int n)
//{ 
//	if(n==0 || n==1)
//	return (n);
//	else
//		return(fib(n-1)+fib(n-2));
}
