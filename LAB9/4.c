#include <stdio.h>
#include <stdlib.h>

struct node{ //declaring a structure such that it can form a linked list
	int data;
	struct node *link;
};
struct node* root ; //declaring a global structure pointer

void delete_links(int n) //function to delete nodes 
{
	struct node *temp = root; //initializing a temporary structure pointer pointing to the root structure 
	//while deleting the first node shift the root position to next link and free the first node
	if (n==1) 
	{
		root = temp->link; 
		free(temp);
		return; //exiting from the function
	}
	int i = 0;
	while (i< n-2) //temp pointer will point (n-1)th node 
	{
		temp = temp->link;
		i++;
	}

	struct node *new_temp = temp->link; //new_temp will point to nth node
	temp->link = new_temp->link; //linking (n-1)th node to (n+1)th node
	free(new_temp); //freeing the nth node
}

void print_linked_list(struct node *Root) //function to print linked list
{
	while (Root != NULL) //printing data inside the strutures till link reaches to NULL 
	{
		printf("%d-->", Root->data);
		Root = Root->link; //shifting the link to next structure
	}
	printf("NULL");
}

int main()
{
	int array[1000];
	struct node *temp, *temp_2;
	int n; 
	root = NULL; //starting the global structure with NULL
	scanf("%d",&n); //taking input of number of integers user will provide
	
	int i = 0;
	while (i<n)
	{
		temp = malloc(sizeof(struct node)); //dynamically allocating memory to the temporary stucture pointer
		scanf("%d", &temp->data); //taking input of numbers and storing it in temporary structure
		array[i] = temp->data; //storing same input in an array
		temp->link = NULL; //poiniting the temporary pointer to NULL

		if(root == NULL) //at first we point the root pointer to first node
			root = temp;
		else
			temp_2->link = temp; //from second node point temp_2 pointer to temp point
		temp_2 = temp; //and exchange tem[_2 to temp
		i++;
	}

	print_linked_list(root);

	printf("\n");

	i = n-1;
	while (i>=0)
	{
		if (array[i]%2 != 0) //finding the odd numbers in linkd list
		{
			delete_links(i+1); //deleting the node
		}
		i--;
	}

	print_linked_list(root);

return 0;
}
