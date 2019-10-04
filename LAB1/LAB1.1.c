#include<stdio.h>

int main(void)
{
	float radius,area;
	scanf("%f",&radius);

	if (radius>=0)
	{
		area = 3.14*radius*radius;
		printf("%.2f\n", area);
	}

	else
	{
		printf("Invalid input\n");
	}

	return 0;
}

