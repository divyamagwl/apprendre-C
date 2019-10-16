#include<stdio.h>

void area_func(float r)
{
	if (r>=0)
	{
		area = 3.14 * r * r;
		printf("%.2f\n", area);
	}

	else
	{
		printf("Invalid input\n");
	}
}

int main(void)
{
	float radius,area;          //initialising radius and area
	scanf("%f",&radius);        //getting input from user
 
	area_func(radius);

	return 0;
}

