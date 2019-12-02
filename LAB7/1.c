#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char *s; 
char* s1; char* s2; char* s3; char* s4; char* s5; char* s6; char* s7;char* s8; char* s9; char* s10;

s = (char*)malloc(500* sizeof(char));
s1 = (char*)malloc(550 * sizeof(char)); 
s2 = (char*)malloc(550 * sizeof(char)); 
s3 = (char*)malloc(500 * sizeof(char));
s4 = (char*)malloc(500 * sizeof(char));
s5 = (char*)malloc(500 * sizeof(char));
s6 = (char*)malloc(500 * sizeof(char));
s7 = (char*)malloc(500 * sizeof(char));
s8 = (char*)malloc(500 * sizeof(char));
s9 = (char*)malloc(500 * sizeof(char));
s10 = (char*)malloc(500 * sizeof(char));

scanf("%s %s %s %s %s %s %s %s %s %s",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10); 

for(int i =0; i<10; i++)
{
    switch (i)
    {
    case 0:
        *(s+i) = *(s1+i);
        break;
    case 1:
        *(s+i) = *(s2+i);
        break;
    case 2:
        *(s+i) = *(s3+i);
        break;
    case 3:
        *(s+i) = *(s4+i);
        break;
    case 4:
        *(s+i) = *(s5+i);
        break;
    case 5:
        *(s+i) = *(s6+i);
        break;
    case 6:
        *(s+i) = *(s7+i);
        break;
    case 7:
        *(s+i) = *(s8+i);
        break;
    case 8:
        *(s+i) = *(s9+i);
        break;
    case 9:
        *(s+i) = *(s10+i);
        break;
    default:
        break;
    }
}

printf("%s",s);

free(s1); free(s2); free(s3); free(s4); free(s5); free(s6); free(s7); free(s8); free(s9); free(s10); 
free(s); 

return 0;
}
