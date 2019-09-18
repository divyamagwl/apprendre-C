#include<stdio.h>

//Not used the concept of Sieve of Eratosthenes
//You should try using Sieve of Eratosthenes
int main(void)
{
int a, i, j, prime=0;
scanf("%d",&a);
if(a>1)
{
	for(i=2; i<=a; i++)
		{
		int x=0;
		for(j=1; j<=i; j++)
			{
			if(i%j==0)
			x++;
			}
		if(x==2)
		prime++;
		}
	printf("%d\n",prime);
}

else
	printf("0\n");
return 0;
}
