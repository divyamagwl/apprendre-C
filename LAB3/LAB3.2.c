#include<stdio.h>
#include<string.h>

int main()
{
int i, j, L, N, a=0, common=0, reset=0, x=1;
char S[1000];
char group[1000][1000]; //2D Array arrangement of input string into substrings 



scanf("%s", &S[0]); //Input of string by user
scanf("%d", &L); //Length of substrings

N = strlen(S); //Length of string input by user

if(L>0) 
{
  if(N>=L)
  {
	for(i=0; i <= (N-L+1); i++)
	{
		a=reset;
		for(j=0; j<L; j++)
		{	
			group[i][j]=S[a]; //Assigning input string to 2D array arrangement of substrings
			a++;
		}
		reset++;
	}

	for(i=0; i<= (N-L+1); i++)
	{	
		for(j=x; j <= (N-L+1) && j > i; j++)
		{
			if( strcmp(group[i], group[j]) == 0) //Finding common strings 
			{
				common++; //Increasing count of common terms
				break;
			}		
		}
		x++;
	}


  printf("%d\n",N-L+1-common);
  }
  else
	printf("%d\n",0);
}
return 0;
}
