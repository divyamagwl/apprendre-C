#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PrintFileData(FILE *fp) //Taking parameter as File pointer
{
	//store data of file character by character till it reaches end of file and print the text on the console
	int character = getc(fp); 
	while (character != EOF)  
	{ 
		putchar(character);          
		character = getc(fp); 
	} 
}

int main()
{
	FILE *fp1; //Declaring a File pointer
	FILE *fp2; //Declaring a File pointer

	system("date > 1.txt"); //Redirecting date to 1.txt file
	system("sleep 5"); //wait for 5 seconds
	system("date > 2.txt"); //Redirecting date to 1.txt file

	fp1 = fopen("1.txt", "r"); //reading the data of file 1.txt 
	fp2 = fopen("2.txt", "r"); //reading the data of file 2.txt

	PrintFileData(fp1); //Printing data of file 1.txt on terminal
	PrintFileData(fp2); //Printing data of file 2.txt on terminal

	fclose(fp1); //Closing the file 
	fclose(fp2); //Closing the file 

return 0;
}
