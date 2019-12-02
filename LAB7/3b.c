#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrncmp(char* str1, char* str2, int n)
{
    int flag = 1;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(int i = 0; i< n && i < len1 && i< len2; i++)
    {
        if(str1[i] == str2[i])
            flag = 0;
        else
        {
            flag = 1;
            break;
        }        
    }
    return flag; 
}

int main()
{
char* s1; char* s2;
int n;

s1 = (char*)malloc(550 * sizeof(char)); 
s2 = (char*)malloc(550 * sizeof(char)); 

scanf("%s %s %d",s1,s2,&n); 

printf("%d\n", mystrncmp(s1, s2, n));

free(s1); 
free(s2); 

return 0;
}
