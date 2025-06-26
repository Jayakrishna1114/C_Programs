#include <stdio.h>
int main()
{
        //int x,y, val=468;
	char x,y,ch[2];
	printf("Enter the a,b values:");
	//scanf("%3d %4d",&x,&y);
       // printf("%d %d\n",x,y);
	//printf("<%10d>\n",val);
	//printf("<%-10d>\n",val);
	
	//FOR CHARACTER FORMATTED INPUT/OUTPUiT
	scanf("%2c %3c",&x,&y);
        printf("%c %c\n",x,y);
	printf("<%10c>\n",ch);
	printf("<%-10c>\n",ch);

}

