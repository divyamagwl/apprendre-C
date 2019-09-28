#include<stdio.h> 
#define swap(a,b){int (temp); temp = a; a = b; b = temp;}

int swaps =0 , comparisons =0;

void bubble(int array[], int n)
{
	if(n==1)
		return ;
	for(int i=0; i<n-1; i++)
	{
		if(array[i]>array[i+1])
		{
			swap(array[i],array[i+1]);
			swaps++;
		}
		comparisons++;
	}
	bubble(array, n-1);
}

int main()
{
int array[20];

for (int i = 0; i < 20; i++)
{
	scanf("%d,",&array[i]); //Taking input as integers separated by a comma
}

bubble(array, 20);

for(int i =0; i<20; i++)
	printf("%d ",array[i]);
printf("\n%d %d",swaps,comparisons);
return 0;
}
