#include <stdio.h>
int main()
{
	int per;
	printf("Enter the percenatge :");
	scanf("%d",&per);
	
	if( per > 65)
	{ 
		printf("First class \n");
	}	

	else if ( per >= 50 && per > 65 )
		printf("Second class\n");
	

	else if ( per >=40 && per < 50)
		printf("Third Class\n");
	
	else
	   printf("Fail\n");
		
	
		

	
}
