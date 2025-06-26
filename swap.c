#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a,b values\n");
	scanf("%d %d",&a,&b);
	printf("Before Swapping :a=%d,b=%d\n",a,b);
	
	//Using Arthimetic Operators
	//a = a + b;
	//b = a - b;
	//a = a - b;
	
	//Using Bitwise XOR Operator
	
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After Swapping :a=%d,b=%d\n",a,b);
	return 0;
}


			
