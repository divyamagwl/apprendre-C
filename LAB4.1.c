#include<stdio.h>
int main(void)
{

int array[10]; //Initializing an integer array

for (int i = 0 ; i < 10 ; i++) 
{
	scanf("%d,",&array[i]); //Taking input as integers separated by a comma
}

for (int i = 9; i >= 0; i--)
{
	printf("%d ",array[i]); //Printing integers in reverse order separated by space
}

printf("\n");

return 0;

}
