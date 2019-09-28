#include<stdio.h>

//Not used the concept of Euclid algorithm
//You should try using Euclid algorithm (Check Euclid.c) 

int main(void)
{
int i, a, b, gcd;
scanf("%d %d", &a, &b);
a = (a>=0)? a:-a;
b = (b>=0)? b:-b;
if(a==0 && b==0)
	printf("Invalid input\n");
else if(a==0 && b!=0)
	printf("%d\n", b); 
else if(a!=0 && b==0)
	printf("%d\n", a);
else
{
	for(i=1; i<=a && i<=b; i++)
	{
		if(a%i== 0 && b%i==0)
			gcd = i;
	}
	printf("%d\n", gcd);
}
return 0;
}
