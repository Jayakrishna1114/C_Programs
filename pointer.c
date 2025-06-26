#include <stdio.h>
int main()
{
	// int * pointer
	//int val = 48;
	//val = 84;
	//int * ptr;
	//ptr = &val;
	//printf("%p\n",ptr);
	//printf("%p\n",&val);
	//printf("%d\n",val);
	//printf("%d\n",*ptr);
	
	// short * pointer
	short sval = 48;
	sval = 84;
	short * sptr;
         sptr = &sval;

	printf("%p\n",sptr);
	printf("%p\n",&sval);
	printf("%d\n",sval);
	printf("%d\n",*sptr);
}
