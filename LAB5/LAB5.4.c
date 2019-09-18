#include<stdio.h>
#define swap(a, b) {long int (temp); temp = a; a = b; b = temp;} //Defining Swap Macro which can be used to swap two variables

//Defining Partition function to find Partition index
int partition(long int Array[], int left, int right) 
{
	int pivot = Array[right]; //Setting pivot at rightmost index of array
	int p_index = left; //Assuming Partition index to be the leftmost index of array

	for (int i = left ; i < right; i++) //Operating loop till we reach rightmost index
	{
		if ( Array[i] <= pivot) //If value of element is less than the pivot then
		{
			swap(Array[i], Array[p_index]); //Swapping it with partition index
			p_index++;
		}
	}

	swap(Array[p_index], Array[right]); //Finally swapping the final partition index with the pivot
	return p_index; //Returning the partition index
}

//Defining QuickSort Function
int quicksort(long int Array[], int left, int right)
{
	if (left < right) //Operating the function till when leftmost index is smaller than rightmost index and not equal to or greater
	{
		int p_index = partition(Array, left, right); //Finding and setting up the partition index
		quicksort(Array, left, p_index -1); //Recursively calling QuickSort function for first partitioned Array 
		quicksort(Array, p_index +1, right); //Recursively calling QuickSort function for other partitioned Array
	}
}

int main()

{

long int Array[1000]; //Initializing an integer array
int n;  

scanf("%d",&n);

for (int i = 0; i < n; i++)
{
	scanf("%ld,",&Array[i]); //Taking input as integers separated by a comma
}

int pivot = Array[n-1]; //Setting the first pivot at the rightmost index

quicksort(Array, 0, n-1); //Calling Mergesort Function to operate on user input array

for(int i = 0; i < n; i++)
{
	printf("%ld ",Array[i]); //Printing sorted array as integers 
}

printf("\n");

for(int i = 0; i < n; i++)
{
	if (Array[i]==pivot) //Checking the position of initial pivot
	{
		printf("%d\n",i);
		break;
	}
}

return 0;
}
