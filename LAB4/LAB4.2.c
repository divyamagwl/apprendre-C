#include<stdio.h>

//Check Linear_recursive.c for Recursive Linear search
int main(void)
{
int array[10];
int x;

for (int i = 0; i < 10; i++)
{
	scanf("%d,", &array[i]); //Taking input integers separated by comma
}

scanf("%d",&x); //Integer to be found in input integer list

int count = 0; //Count of linear searches done
int result = 0; //Result of variable found in list or not
for (int j = 0; j < 10; j++) //Linear searching the variable x in the list
{
	count++;
	if (array[j] == x) 
	{
		result = 1;
		break; //Breaking the loop when variable is found in input
	}
	else
		result = 0;
}
	
printf("%d %d\n",result,count);

return 0;
}
