#include<stdio.h>
int main(void)
{
float r,area ;
scanf("%f",&r);
if (r>=0)
{
area = 3.14*r*r;
printf("%.2f\n", area);
}
else
{
printf("Invalid input\n");
}
return 0;
}

