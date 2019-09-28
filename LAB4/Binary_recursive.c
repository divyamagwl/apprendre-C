#include<stdio.h>

int count =0;
int binary(int array[], int left, int right, int search)
{
	int mid = (left+right)/2;
	if(left<=right)
	{
		count++;

		if(array[mid] ==  search)
			return 1;

		else if(array[mid] > search)
			binary(array, left, mid-1, search);

                else if(array[mid] < search)
                        binary(array, mid+1, right, search);
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

printf("%d ",binary(array,0,9,search));

printf("%d\n",count);

return 0;
}
