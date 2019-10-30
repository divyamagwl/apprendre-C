#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int n; 
int* numbers; 

scanf("%d",&n); //Taking input of number of integers user want to put

numbers = (int*)malloc(n * sizeof(int)); //Allocating dynamic memory to store the integers

for(int i = 0; i<n; i++)
{
	scanf("%d",numbers+i); //Taking input of integers
}

for(int i = 0; i<n; i++)
{
	printf("%d ",*(numbers+i)); //Printing integers
}

printf("\n");
free(numbers); //Freeing the space allocated

return 0;
}
