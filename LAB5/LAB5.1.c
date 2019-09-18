#include<stdio.h>
#define swap(a, b) {long int (temp); temp = a; a = b; b = temp;} //Defining Swap Macro which can be used to swap two variables

int bubblesort(long int Array[])
{

int swaps = 0 ; int comparisons = 0;

//Bubble Sorting  
for (int i = 0; i < 19; i++) 
{
	for (int j = 0; j < 19 - i; j++) //Operating loop to shift the maximum value element to the rightmost position
	{
		if (Array[j] > Array[j+1])  //When lower index element is greater value than its next index element
		{
			swap(Array[j] , Array[j+1]); //Swapping elements
			swaps++; //Increasing count of Swap variable when we swap a lower value element with higher value element 
		}
		comparisons++; //Increasing count of Comparison variable
	
	}
}

for (int i = 0; i < 20; i++) //Printing sorted array
{
	printf("%ld ", Array[i]);
}

printf("\n");
printf("%d ",swaps); //Printing swap and comparison variables
printf("%d",comparisons);

}

int main(void)

{
long int Array[20]; //Initializing an integer array

for (int i = 0; i < 20; i++)
{
	scanf("%ld,",&Array[i]); //Taking input as integers separated by a comma
}

bubblesort(Array);

return 0;
}
