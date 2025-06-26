#include <stdio.h>
#include <string.h>
int main(void)
{
  //      char str[100];
  //	int len;
 //	printf("Enter the string\n");
 //	scanf("%s",str);
  // 	printf("Original String :%s\n",str);
  // 	len =strlen(str);
// 	printf("Reversed String: ");
  //	for(int i=len-1;i>=0;i--)
  //	{
  //  		printf("%c",str[i]);
  // 	}
  // 	printf("\n");
    


	int n, rem, rev=0;
	printf(" Enter n value : ");
	scanf("%d",&n);

//	while(n >0)
	while(n!=0)
	{
		rem = n%10 ;
		rev = rev * 10 + rem;
		 n = n/10 ;
	}
	printf("Reversed number : %d\n",rev);
	return 0;
}
