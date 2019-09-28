#include<stdio.h>


int sum_of_digits(int n)
{
	static int sum =0;
	if (n>0)
	{
		sum += n%10 ;
		sum_of_digits(n/10);
	}
	return sum;
}

int main()
{
int n;
scanf("%d",&n);

printf("%d\n",sum_of_digits(n));

return 0;
}
