#include <stdio.h>
int main ()
{
	int d,m,y;
	int flag =1,isleap = 0;
	printf("Enter date (dd/mm/yy) : ");
	scanf("%d/%d/%d",&d,&m,&y);

	if(y%4==0 && y%100!=0 || y%400==0)	//checks for leap year

		isleap = 1;
	if(y <1850 || y >2050) //checks the year with the range of years
		flag=0;

	else if(m < 1 || m > 12 ) //checks for the month
		flag = 0;

	else if ( d < 1 || d>31)   
	       flag = 0;
         
         else if( m == 2) // checks for days oin Feb
	     {
	         if ( d > 29 )
	           flag = 0;
                if( d == 29 && !isleap) 
                      flag = 0 ; 
	     
           else if( m==4 || m==6 || m==9 || m==11) // checks for days in the months of april,june,sep,nov
	   
	          if(d>30)
	             flag = 0;
	   }
             else if(d>31)
	           flag = 0;
	     
          if(flag == 0)
		  printf("Not valid date\n");
	  else
		  printf("Valid Date\n");

	  return 0;
              		  

}

