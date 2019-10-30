#include<stdio.h>

struct students //defining structure with name, roll number, age and marks of a student
{
	char name[100];
	char roll_number[100];
	int age;
	int marks;
};

int main()
{
	int n;
	struct students list[100]; //array of structures
	scanf("%d",&n); //taking input of number of students
	for (int i= 0; i<n; i++)
	{
		//taking input of details of a student and storing it in structure array
		scanf("%s ",list[i].name); 
		scanf("%s ",list[i].roll_number);
		scanf("%d ",&list[i].age);
		scanf("%d",&list[i].marks);
	}
	for (int i= 0; i<n; i++)
	{
		//printing the details of every student
		printf("%s\n",list[i].name);
        printf("%s\n",list[i].roll_number);
        printf("%d\n",list[i].age);
        printf("%d\n",list[i].marks);
	}

return 0;
}
