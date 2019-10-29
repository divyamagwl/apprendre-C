#include<stdio.h>
int main(void)
{

	int array[10]; //Initializing an integer array

	for (int i = 0 ; i < 10 ; i++) 
		scanf("%d,",&array[i]); //Taking input as integers separated by a comma
	int temp;
	for (int j = 0; j < 5; j++) //reversing the elements of the array
	{
		temp = array[j];
		array[j] = array[9-j];
		array[9-j] = temp;
	}
	for (int k = 0; k < 10; k++)
		printf("%d ",array[k]); //Printing elements of reversed array, separated by space
	printf("\n");
	return 0;

}
