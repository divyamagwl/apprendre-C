#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int x1,x2,y1,y2,r1,r2;
	double dist; //Distance between centres of circles

	scanf("%d" "%d" "%d" "%d" "%d" "%d", &x1,&y1,&x2,&y2,&r1,&r2) ;
	//Taking input from user for all required parameters.

	if(r1>=0 && r2>=0)
	
	{
		dist = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))); 
		//Distance formula

		if (dist > (r1+r2) | dist < abs(r1-r2))
//If distance is greater than sum of radius or less than absolute difference of radius then they can never intersect. 
		
			printf("NO\n");

		else
			printf("YES\n");

	}

	else
		printf("Invalid Input\n");

return 0;
}
