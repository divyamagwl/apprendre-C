#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int degree1,degree2; //initializing degree of polynomials 1 and 2
	
	scanf("%d",&degree1); 
	
	double *poly1 = (double*)malloc((degree1+1)*sizeof(double)); //dynamically allocating memory to store coefficients of polynomial 1

	for (int i = 0; i<=degree1; i++)
		scanf("%lf",poly1+i);

    scanf("%d",&degree2);

	double *poly2 = (double*)malloc((degree2+1)*sizeof(double)); //dynamically allocating memory to store coefficients of polynomial 2

	for (int i = 0; i<=degree2; i++)
		scanf("%lf",poly2+i);
	
	int highest_degree = (degree1>degree2) ? degree1:degree2; //finding the highest degree upon degree 1 and 2
	printf("%d ",highest_degree); 
	double *add = (double*)calloc((highest_degree+1),sizeof(double)); //dynamically allocating memory to store coefficients after addition

	if(degree1 == degree2) //if degree of both polynomial are same simply add their coefficients 
	{
		for(int i = 0; i<=degree1; i++)
			*(add+i) = *(poly1+i) + *(poly2+i);
	}

//if degree of one is more than the other then reach the coefficient till where degree of higher degree polynomial is equal to degree of other polynomial then start adding coefficients
	else if(degree1 > degree2) 
	{
		int j = 0;
		while (j < degree1-degree2) 
		{
			*(add+j)=*(poly1+j);
			j++;
		}
		for(int i = 0; i<=degree1; i++)
		{
			*(add+j)= *(poly1+j) + *(poly2+i);
			j++;
		}
	}
	
	else if(degree2 > degree1)
	{
		int j = 0;
		while (j < degree2-degree1) 
		{
			*(add+j)=*(poly2+j);
			j++;
		}
		for(int i = 0; i<=degree2; i++)
		{
			*(add+j)= *(poly2+j) + *(poly1+i);
			j++;
		}
	}

	for(int i = 0; i<=highest_degree; i++) //printing added coefficients
		printf("%.2lf ",*(add+i));

	free(add);
	printf("\n");

	int new_degree = degree1 + degree2;
	printf("%d ", new_degree);
	double *multiply = (double*)malloc((new_degree+1)*sizeof(double)); //dynamically allocating memory to store coefficients after addition
	memset(multiply, 0, (new_degree+1)*sizeof(double)); //reseting each and every number to 0

//multiplying coefficients and storing them in such a way that it is sum of similar coefficients somewhat similar to matrix multiplication  
	for(int i=0; i<= degree1; i++) 
	{
		int k = i;
		for(int j =0; j<=degree2; j++)
		{
			*(multiply+k) += (*(poly1+i)) * (*(poly2+j));
			k++;
		}
	}	

        for(int i = 0; i<=new_degree; i++)
                printf("%.2lf ",*(multiply+i));
	printf("\n");

return 0;
}


