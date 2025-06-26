#include <stdio.h>
int main()
	{
		int x,y,a,b,hcf,lcm,temp;
		printf("Enter two numbers :");
		scanf("%d %d",&x,&y);
		a=x;
		b=y;
		while(b!=0)
		{
			temp = b;
			b = a%b;
			a = temp;
		}
		hcf = a;
		lcm = (x*y)/hcf;
		printf("Hcf of %d and %d is %d\n",x,y,hcf);
	         printf("LCM of %d and %d is %d\n",x,y,lcm);
	}

