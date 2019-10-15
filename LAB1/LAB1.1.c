#include<stdio.h>

int main(void)
{
	float radius,area;          //initialising radius and area
	scanf("%f",&radius);        //getting input from user
 
	if (radius>=0)
	{
		area = 3.14 * radius * radius;
		printf("%.2f\n", area);
	}

	else
	{
		printf("Invalid input\n");
	}

	return 0;
}

