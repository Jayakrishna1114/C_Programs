#include <stdio.h>
int main()
{
	int n,num,reverse=0,remainder;
	printf("Enter n value:\n");
	scanf("%d",&n);
         num =n;
          
	while( n!=0)
	{
		remainder =n%10;
		reverse = reverse *10+remainder;
		n  = n/10;
	}
	if( num == reverse)
	{
		printf("%d is palindrome\n");
	}
	else
	{

		printf("%d is not palindrome\n");
	}
}

