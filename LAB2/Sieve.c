#include<stdio.h>
#include<math.h>
#define MAX 10000

int main()
{
int numbers[MAX];
int n, prime = 0;

scanf("%d",&n);

for (int i = 0; i <= n; i++)
	numbers[i]= 1; 
//Prime --> 1 and Composite --> 0

numbers[0]=0;
numbers[1]=0;
for (int i =2; i<=sqrt(n); i++)
{
	if(numbers[i]==1)
	{
		for (int j=2; (i*j)<=n; j++)
			numbers[i*j]= 0;
	}
}

for (int i =0; i<=n; i++)
	if(numbers[i]== 1)
		prime++;
printf("%d\n",prime);

return 0;
}
