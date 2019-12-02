#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void itob(int n, char*s, int b)
{
int remainder;

while(n >0)
{
	remainder = n % b; //Finding remainder
	if(remainder <= 9)
        *s = remainder + '0'; //Storing character of remainder index in s string pointer
    else
        *s = remainder - 10 + 'a'; //Storing character of remainder index in s string pointer
 	s++; //Increasing address of pointer
 	n = n/b; //Dividing n by base value
}
}

int main(void)
{
int n, b;
char* s;
 
scanf("%d %d",&n,&b);

s = (char*)malloc(256*sizeof(char)); //dynamic allocation of memory

if(b>=1 && b<=32) //Given condition
	itob(n, s, b);

for (int i=strlen(s)-1; i>=0; i--) //Printing string in reverse order 
	printf("%c",*(s+i));
printf("\n");

free(s); //freeing up space allocated in heap memory

return 0;
}
