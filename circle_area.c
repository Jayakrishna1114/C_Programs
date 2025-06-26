#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	float r,a,p;
	printf("Enter radius of the circle:");
	scanf("%f",&r);

	a = PI * r * r;
	p = 2 * PI * r;
	printf("Area of the circle :%.2f \n",a);
	printf("Perimeter of the circle :%.2f\n",p);
}


