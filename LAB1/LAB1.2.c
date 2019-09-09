#include<stdio.h>
int main(void)
{
int a, b, c;
scanf("%d",&a);
scanf("%d",&b);
if (a&&b>0)
{
if (a<=b)
{
c = b%a;
printf("%d\n", c);
}
else
{
c = a%b;
printf("%d\n", c);
}
}
else
{
printf("Invalid input\n");
}
return 0;
}


