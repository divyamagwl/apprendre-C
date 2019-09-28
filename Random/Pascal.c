#include<stdio.h>

//Geeksforgeeks
void Pascal(int n) 
{ 
for (int line = 1; line <= n; line++) 
{ 
    int C = 1;  
    for (int i = 1; i <= line; i++)  
    { 
    printf("%d ", C);  
    C = (C * (line - i)) / i;  
    } 
    printf("\n"); 
} 
} 

int main() 
{ 
int n;
scanf("%d",&n); 

Pascal(n); 
return 0; 
} 
