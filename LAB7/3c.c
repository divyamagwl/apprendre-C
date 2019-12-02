#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void mystrncpy(char* str1, char* str2, int n)
{
    int len2 = strlen(str2);

    for(int i =0; i<len2 && i<n; i++)
    {
        str1[i] = str2[i];
    }
}

int main()
{
char* s1; char* s2;
int n;

s1 = (char*)malloc(550 * sizeof(char)); 
s2 = (char*)malloc(550 * sizeof(char)); 

scanf("%s %s %d",s1,s2,&n); 
mystrncpy(s1, s2, n);
printf("%s\n", s1);

free(s1); 
free(s2); 

return 0;
}
