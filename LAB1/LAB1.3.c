#include<stdio.h>
int main(void)
{
double celsius,fahr;
scanf("%lf",&celsius);

fahr=((9*celsius)/5)+32;

printf("Temperature in fahrenheit is %.2f\n", fahr);

return 0;
}
