#include<stdio.h>
#include<math.h>
int main(void)
{
double a, b, c, d, x, y, e;
scanf("%lf %lf %lf", &a, &b, &c);
if (a!=0)
{
d=((b*b)-(4*a*c));
if(d>=0)
{
x = (-b+sqrt((b*b)-4*a*c))/(2*a);
y = (-b-sqrt((b*b)-4*a*c))/(2*a);
printf("%.2lf %.2lf\n", x,y);
}
else
{
x = (-b)/(2*a);
e = (sqrt(-(b*b-4*a*c)))/(2*a);
printf("%.2f+i%.2f %.2f-i%.2f \n",x,e,x,e);
}
}
return 0;
}

