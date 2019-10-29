#include<stdio.h>
 // done the problem using euclid's alogrithm

int main(void)
{
int i, a, b, gcd;
scanf("%d %d", &a, &b);
a = (a>=0)? a:-a;
b = (b>=0)? b:-b;
if(a==0 && b==0)
	printf("Invalid input\n");
else if(a==0 && b!=0)
	printf("%d\n", b); 
else if(a!=0 && b==0)
	printf("%d\n", a);
else
{
   while (b > 0)
   {
      int r = a % b;
      a = b;
      b = r;
   }
printf("%d\n", a);
}
return 0;
}
