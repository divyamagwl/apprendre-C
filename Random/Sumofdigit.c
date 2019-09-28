#include<stdio.h>
#include<math.h>
int main()
{
int a, x, y, sum = 0 ;
scanf("%d",&a);
if(a>0)
{
	while(a>0)
	{
	x= a % 10;
	sum = sum + x;
	a = floor(a/10);
	}
printf("%d\n",sum);
}

else
printf("Invalid input\n");

return 0;
}
















