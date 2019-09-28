#include<stdio.h>

int print(int array[],int length)
{	
	if(length>1)
		print(array, length-1);
        printf("%d ",array[length-1]);
}

int main()
{
int array[]={1,4,3,2,1};

print(array, 5);

return 0;
}
