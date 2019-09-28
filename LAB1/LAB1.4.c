#include<stdio.h>
#include<math.h>
int main(void)
{
double a, b, c, D, x, y, e;
scanf("%lf %lf %lf", &a, &b, &c);

if (a!=0)
{
	D=((b*b)-(4*a*c));
	if(D>=0)
	{
		x = (-b+sqrt(D))/(2*a);
		y = (-b-sqrt(D))/(2*a);
		printf("%.2lf %.2lf\n", x,y);
	}
	else
	{
		x = (-b)/(2*a);
		e = (sqrt(-D))/(2*a);
		printf("%.2f+i%.2f %.2f-i%.2f \n",x,e,x,e);
	}
}

return 0;
}

