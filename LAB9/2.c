#include<stdio.h>

struct complex //defining a structure with two float variables
{
	float real,imag;
};

int main()
{
	float a,b,c,d; 

	scanf("%f %f %f %f",&a,&b,&c,&d); //taking input of complex numbers real parts and imaginary parts

	struct complex num1 = {a, b}; //assigning values to structure complex
	struct complex num2 = {c, d}; //assigning values to structure complex

	printf("%.2f + %.2fi\n", num1.real+num2.real, num1.imag+num2.imag); //adding complex numbers
	printf("%.2f + %.2fi\n", num1.real-num2.real, num1.imag-num2.imag); //subtracting complex numbers
	printf("%.2f + %.2fi\n", num1.real*num2.real - num1.imag*num2.imag, num1.real*num2.imag + num1.imag*num2.real); //multiplying complex numbers

return 0;
}
