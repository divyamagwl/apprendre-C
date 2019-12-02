#include<stdio.h>
#include<stdlib.h>

float add(float a, float b) //Addition function
{
	return a+b; 
}

float subtract(float a, float b) //Subtraction function
{
	return a-b;
}

float multiply(float a, float b) //Multiplication function
{
	return a*b;
}

float division(float a, float b) //Division function
{
	if (b!= 0)
		return a/b;
} 

int main()
{
	float (*operations[])(float, float) = {add, subtract, multiply, division}; //pointer function array which points to different functions 
	float a,b,output; 
	char operator;

	scanf("%f %f ",&a,&b); //Taking input of integers
	scanf("%c",&operator); //Taking input of operator

	if( operator == '+')
	{
		output = (*operations[0])(a,b); //Using pointer function array 
	}
	else if(operator == '-')
	{
		output = (*operations[1])(a,b); //Using pointer function array 
	}
	else if(operator == '*')
	{
		output = (*operations[2])(a,b); //Using pointer function array 
	}
	else if(operator == '/')
	{
		output = (*operations[3])(a,b); //Using pointer function array 
	}
		
	printf("%.4f\n",output);

return 0;
}
