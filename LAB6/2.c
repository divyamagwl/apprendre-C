#include<stdio.h>
#include<stdlib.h>

void mystrcmp(char* str1, char* str2)
{
  while( (*str1 != '\0' && *str2 != '\0') && *str1 == *str2) //Comparing characters till null character is reached or characters are not same 
  {
	  str1++; //Moving on to next character using address of string 
	  str2++; //Moving on to next character using address of string
  }
  
  if (*str1=='\0' && *str2=='\0') //If both reach null character together then they are identical strings
	  printf("0\n");

  else 
	  printf("1\n");

}


int main()
{
char* str1;
char* str2;
str1 = (char*)malloc(256 * sizeof(char)); //Allocating dynamic memory to store the string
str2 = (char*)malloc(256 * sizeof(char)); //Allocating dynamic memory to store the string

scanf("%s %s",str1,str2); //Taking input of string
		
mystrcmp(str1, str2); //Calling a function to compare strings

free(str1); //Freeing up allocated space
free(str2); //Freeing up allocated space

return 0;
}
