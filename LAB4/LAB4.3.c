#include<stdio.h>
#include<math.h>

int main(void)
{

int array[10];
int x;

for(int i = 0; i < 10; i++) //Input of integer array separated by comma
{
	scanf("%d,",&array[i]);
}

scanf("%d",&x); //Input of variable to be found in integer list 

int Left = 0; //Leftmost possible index

int Right = 9; //Rightmost possible index

int result = 0; //Result representing variable is in input or not

int count = 0; //variable for number of searches done

int middle; //Middle value index

int j =0;

while(j <= 5) //Binary search
{
	if ( Left > Right ) //Leftmost index should not cross Rightmost index for variable to be found 
	{
		result = 0;
		break;
	}
	
	middle = floor( (Left + Right ) / 2);
	
	if(array[middle] < x) 
	{
		Left = middle + 1; //Shifting the leftmost possible index
		count ++;
	}
	
	else if (array[middle] > x)
	{
		Right = middle - 1; //Shifting the rightmost possible index
		count ++;
	}
	
	else //If both leftmost and rightmost possible index are same then the number is found 
	{
		count ++;
		result = 1; 
		break;
	}

	j ++;
}

printf("%d %d\n",result, count);

return 0;
}
