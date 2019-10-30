#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strend(char* s,char* t)
{
 int length_t = strlen(t); //Initializing a variable for length of string t

 while (*s != '\0') //Increasing pointer address till it reaches null character 
	s++;

 while (*t != '\0') //Increasing pointer address till it reaches null character
	t++;
 
 s--; //Decreasing pointer address by one to reach last character of string 
 t--; //Decreasing pointer address by one to reach last character of string
 
 while (length_t >0 && *s==*t) //Comparing characters of strings from last
 {
	s--; //Decreasing pointer address by one
	t--; //Decreasing pointer address by one 
	length_t--; //Decreasing variable value  
 }

 if(length_t == 0) //If variable value reaches to 0 then both string were same from last
	 return 1;
 else 
	 return 0;

}

int main()
{
char* s;
char* t;
int output;

s = (char*)malloc(257*sizeof(char)); //dynamic allocation of memory
t = (char*)malloc(257*sizeof(char)); //dynamic allocation of memory

scanf("%s %s",s,t); 

output= strend(s,t); 

if (output==1)
	printf("%s", t); 
else
	printf("%d",output);

free(s); //freeing up space allocated in heap memory
free(t); //freeing up space allocated in heap memory

return 0;
}
