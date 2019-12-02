#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* mystrncat(char* str1, char* str2, int n)
{
    int len1 = strlen(str1);
    int len2 = strlen(str2); 
    char *s;
    s = (char*)malloc(550 * sizeof(char));
    strcpy(s ,str1);
    for(int i=0; i<n && i<len2; i++)
    {
        s[len1+i] = str2[i];
    }    

    return s;
}

int main()
{
char* s1; char* s2;
int n;

s1 = (char*)malloc(550 * sizeof(char)); 
s2 = (char*)malloc(550 * sizeof(char)); 

scanf("%s %s %d",s1,s2,&n); 

printf("%s\n", mystrncat(s1, s2, n));

free(s1); 
free(s2); 

return 0;
}
