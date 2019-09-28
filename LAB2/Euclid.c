#include<stdio.h>

//It can also be done using loops instead of Recursion
int gcd(int x,int y)
{
if (y == 0)
	return x;
else
	return gcd(y,(x%y));
}

int main()
{
int a,b;

scanf("%d %d",&a,&b);

a = (a>=0)? a:-a;
b = (b>=0)? b:-b;

if (a== 0 && b ==0)
	printf("Invalid Input\n");
else
	printf("%d\n", gcd(a,b));

return 0;
}
