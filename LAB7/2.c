#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strindex(char* str, char c)
{
  int len = strlen(str);
  for(int i = len-1; i>=0; i--)
  {
    if(str[i] == c)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
char* s; char t;
s = (char*)malloc(550 * sizeof(char));

scanf("%s %c",s ,&t);

int index = strindex(s, t);
printf("%d\n", index);

free(s);
return 0;
}
