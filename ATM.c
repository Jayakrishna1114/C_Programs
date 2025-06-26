#include<stdio.h>
int main()
{
	int n,choice,notes;
	printf("Enter the total amount in Rs :");
	scanf("%d",&n);
	printf("Enter the value of note from which u want to begin :");
	scanf("%d",&choice);

	switch(choice)
	{
		case 500 : notes = n/500;
			   printf("Numbr of 500 Rs notes = %d\n",notes);
			   n = n  % 500;
		case 100 : notes = n/100;
			   printf("Number of 100 Rs notes = %d\n",notes);
			   n = n % 100;
		case 50 : notes = n/50;
			  printf("Number of 50 Rs notes : %d\n",notes);
			  n = n % 50;
	        case 20 : notes = n /20;
			  printf("Number of 20 Rs notes : %d\n",notes);
			  n = n % 20;
	        case 10 : notes = n / 10;
			  printf("Number of 10 Rs notes : %d\n",notes);
			  n = n % 10;
	        case 5 : notes = n / 5;
			 printf("Number of 5 Rs coins : %d\n", notes);
			 n = n % 5;
	        case 2 : notes = n /2;
			 printf("NUmber of 2 Rs coins :%d\n",notes);
			 n = n %2;
	        case 1 : printf("Number of 1 Rs coins :%d\n",notes);
               default : printf("Enter  valid values only\n");
	}

		
}
