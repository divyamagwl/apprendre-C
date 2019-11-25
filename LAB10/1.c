#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) 
{
	int sum = 0; //Initializing th sum to be equal to 0

	printf("%d ",argc-1); //Printing the number of arguments passed

	for (int i = 1; i<argc; i++) 
		sum += atoi(argv[i]); //Converting characters to integers and adding the value to sum

	printf("%d\n",sum); //Printing the sum of numbers 

return 0;
}
