#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrcat(char* str1, char* str2)
{
  
  while(*str1 != '\0' ) //Increasing address value till null character is encountered
  {
	str1++; //Moving on to next character using address of string
  }

  while(*str2 != '\0' )
  {
	*str1 = *str2; //Assigning characters of second string into first string 
	str1++; //Moving on to next character using address of string
	str2++; //Moving on to next character using address of string
  }

  *str1 = '\0'; //Setting up null character

}

int main()
{
char* s1;
char* s2;

s1 = (char*)malloc(550 * sizeof(char)); //Allocating dynamic memory to store the string
s2 = (char*)malloc(550 * sizeof(char)); //Allocating dynamic memory to store the string

scanf("%s %s",s1,s2); //Taking input of string

mystrcat(s1, s2); //Calling a function to concatenate strings

printf("%s\n",s1); 

free(s1); //Freeing up allocated space
free(s2); //Freeing up allocated space

return 0;
}
