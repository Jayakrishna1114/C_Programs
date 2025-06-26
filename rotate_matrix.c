#include <stdio.h>
	
int main()
{
	int i,j,temp,a[3][3];


        printf("Enter the matrix:\n");
        for(i=0;i<3;i++)
	{
           for(j=0;j<3;j++)
           {
	     scanf("%d",&a[i][j]);
            }
	}
         printf("Enter Original Matrix:\n");
          for(i=0;i<3;i++)
	  {
		 for(j=0;j<3;j++)
		 {
			printf("%d\t",a[i][j]);
		 }
		 printf("\n");
	  }

	  // For Transpose Matrix
	   for(i=0;i<3;i++)
	   {
		   for(j=i+1;j<3;j++)
		   {
			   temp = a[i][j];
			   a[i][j] = a[j][i];
			   a[j][i] = temp;
		   }
	   }

	  printf("\n Transpose Matrix :\n");
	  for(i=0;i<3;i++)
	  {
		  for(j=0;j<3;j++)
		  {
			  
			  printf("%d\t",a[i][j]);
		  }
		  printf("\n");
	  }
	  // Rotating the rows by using swapping
	  for(i=0;i<3;i++)
	  {
		  for(j=0;j<3/2;j++)
		  {
			  temp   =  a[i][j];
	                  a[i][j] = a[i][2-j];
			  a[i][2-j] = temp;
		  }
	  }
	  printf("\n 90 Degrees Rotated  matrix:\n");
	  for(i=0;i<3;i++)
		  {
			  for(j=0;j<3;j++)
			  {
				  printf("%d\t",a[i][j]);
			  }
			  printf("\n");
		  }
	  return 0;
}
	


 	  
 
