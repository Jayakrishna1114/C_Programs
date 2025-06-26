#include <stdio.h>
int main()
{
	int n ,digit, sum = 0, product = 1;
	printf("Enter n value :");
	scanf("%d",&n);
	while( n != 0)
	{
		digit = n % 10;
		sum = sum + digit;
		product = product * digit;
		n = n / 10 ;
	}
	printf("Sum of a  Number : %d\n",sum);
	printf("Product of a number : %d\n",product);
}

