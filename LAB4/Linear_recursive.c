#include<stdio.h>

int compare = 0;
int linear(int array[], int left, int right, int search)
{
	if (left <= right)
	{
		compare++;
		if (array[left] == search)
			return 1;
		else
		{
			return linear(array, left+1, right, search);
		}
	}
	else
		return 0;
}

int main()
{
int array[10];
int search;

for(int i = 0; i < 10; i++) //Input of integer array separated by comma
{
	scanf("%d,",&array[i]);
}

scanf("%d",&search); //Input of variable to be found in integer list 

printf("%d ",linear(array, 0 , 9 , search));
printf("%d\n", compare);

return 0;
}
