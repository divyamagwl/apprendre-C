#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strend(char* s,char* t)
{
    int flag = 0;
    int len_t = strlen(t); //Length of t
    int len_s = strlen(s); //Length of s

    for(int i= 0; i<len_t; i++)
    {
        if(s[len_s - len_t + i] == t[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
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
	printf("%s\n", t); 
else
	printf("%d\n",output);

free(s); //freeing up space allocated in heap memory
free(t); //freeing up space allocated in heap memory

return 0;
}
