#include<stdio.h>
int main()
{
	int n,digit,even = 0,odd = 0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	if(n>0)
		do{
			digit = n %10;
			if( digit % 2 == 0)
				even = even + digit;
			else
				odd = odd + digit;
			n = n / 10;
		}while(n != 0);
	printf("Sum of Even Numbers is : %d\n",even);
	printf("Sum of Odd Numbers is : %d\n",odd);
}
		
