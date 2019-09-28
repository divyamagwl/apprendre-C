#include<stdio.h>
int main(void)
{
int a, b;
scanf("%d",&a);
scanf("%d",&b);

if (a && b >0)
{
	if (a<=b)
		printf("%d\n", (b % a));
	else
		printf("%d\n", (a % b));
}

else
	printf("Invalid input\n");

return 0;
}


