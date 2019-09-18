#include<stdio.h>
#define swap(a, b) {long int (temp) ; temp = a; a = b; b = temp;} //Defining Swap Macro which can be used to swap two variables

int selectionsort(long int Array[])
{
int swaps = 0 ; int comparisons = 0; 
int minimum;

//Selection Sorting  
for (int i = 0; i < 19; i++) 
{
	minimum = i; //Initialising minimum everytime as current index
	for (int j = i + 1; j < 20; j++)
	{
		if(Array[j] < Array[minimum]) //Finding the index of lowest value element 
		{
			minimum = j;
		}
		
		comparisons += 1; //Increasing count of Comparison variable 	
	}
	swap(Array[i],Array[minimum]); //Swapping the current index element with the lowest value element
	swaps += 1; //Increasing count of Swap variable everytime we finish finding the smallest element
}


for (int i = 0; i < 20; i++) //Printing sorted array
{
	printf("%ld ", Array[i]);
}

printf("\n");
printf("%d %d\n",swaps,comparisons); //Printing swap and comparison variables

}

int main(void)
{
long int Array[20]; //Initializing an integer array

for (int i = 0; i < 20; i++)
{
	scanf("%ld,",&Array[i]); //Taking input as integers separated by a comma
}

selectionsort(Array);

return 0;
}
