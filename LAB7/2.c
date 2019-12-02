#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strindex(char* str, char* t)
{
  int flag =0;
  int len_str = strlen(str);
  int len_t = strlen(t);
  for(int i = len_str; i>=len_t; i--)
  {
    for(int j = 0; j<len_t; j++)
    {    
        if(str[i-len_t+j] == t[j])
        {
            flag++;
        }
        else
        {
            break;
        }
        
        if(flag == len_t)
        {
            return i-len_t;
        }
    }
    flag = 0;
  }
  return -1;
}

int main()
{
char* s; char* t;
s = (char*)malloc(550 * sizeof(char));
t = (char*)malloc(550 * sizeof(char));

scanf("%s %s",s,t);

int index = strindex(s, t);
printf("%d\n", index);

free(s);
return 0;
}