#include <stdio.h>
int main()
{
	float celsius,fahr;
	int l=0,u=100,step=20;
	
	//FAHRENTHEAT TO CELSIUS

	/*fahr=l;
	while(fahr <= u)
	{
		celsius = 5 * (fahr-32)/9;
		printf("%d \t %d\n",fahr,celsius);
		fahr = fahr + step;
        } */
         
         // CELSIUS TO FAHRENHEAT

	celsius = l;
	while( celsius <= u)
	{
		fahr = (celsius * 9/5)+32;
		printf("%.2f\t %.2f\n",celsius,fahr);
		celsius = celsius + step;
	}
}
