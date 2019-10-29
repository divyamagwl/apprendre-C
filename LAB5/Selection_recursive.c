#include<stdio.h>
#define swap(a, b) {int (temp); temp = a; a = b; b = temp;}

int swaps =0; int comparisons =0;
int min_index(int array[], int i,int j)
{
	if(i==j)
		return i;
	int k = min_index(array, i+1, j);
	return (array[i]<array[k])? i:k;
}

int selection(int array[], int n, int index)
{
	if (index == n)
		return 0;
	int k = min_index(array, index, n-1);
	comparisons++;
	swap(array[k],array[index]);
	swaps=swaps+1;
	selection(array, n, index+1);
}

int main()
{
int array[20];

for (int i = 0; i < 20; i++)
{
	scanf("%d,",&array[i]); //Taking input as integers separated by a comma
}

selection(array, 20, 0);

for(int i =0; i<20; i++)
	printf("%d ",array[i]);
printf("\n%d %d",swaps,comparisons);

return 0;
}

