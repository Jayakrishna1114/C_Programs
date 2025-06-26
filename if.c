#include <stdio.h>
int main()
{
	int x=0,y=1;
       // int x =1,y=1;


	//if(x++ && ++y)
	//if(++x && y++)
        if(++x && ++y)
	//if(x++ && y++)
		printf("Success\n");
	printf("%d %d\n",x,y);
}
