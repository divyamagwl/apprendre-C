#include<stdio.h>

int fact(int n)
{
	if (n>0)
		return fact(n-1)*n ;
	else 
		return 1;
}

int main()
{
int n;
scanf("%d",&n);
printf("%d\n",fact(n));
return 0;
}
