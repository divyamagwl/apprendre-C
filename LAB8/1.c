#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void itob(int n, char*s, int b)
{
int remainder;
char* characters;
characters = (char*)malloc(36*sizeof(char)); //dynamic memory allocation

for (int i=0; i<10; i++)
{
	*characters = i+48; //Storing ascii values from '0' to '9'
	characters++;
}

for (int i=0; i<26; i++)
{
	*characters = i+97; //Storing ascii values from 'a' to 'z'
	characters++;
}

for (int i=0; i<36; i++) //Reset the character pointer address to first address in it
{
	characters--;
}


while(n >0)
{
	remainder = n % b; //Finding remainder
	*s = characters[remainder]; //Storing character of remainder index in s string pointer
 	s++; //Increasing address of pointer
 	n = n/b; //Dividing n by base value
}

free(characters); //freeing up space allocated in heap memory

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

free(s); //freeing up space allocated in heap memory

return 0;
}
