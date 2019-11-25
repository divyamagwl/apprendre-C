#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void StoreFileData(FILE *fp, FILE *storefp) //Taking parameter as one File pointer from which data will be read and another one it will store the data 
{
	//store data of file character by character till it reaches end of file and store the text in another file
	int character = getc(fp); 
	while (character != EOF)  
	{ 
		putc(character, storefp);          
		character = getc(fp); 
	} 
}

int main()
{
	FILE *fp1; //Declaring a File pointer
	FILE *fp2; //Declaring a File pointer
	FILE *fp3; //Declaring a File pointer

	fp1 = fopen("1.txt", "r"); //reading the data of file 1.txt
	fp2 = fopen("2.txt", "r"); //reading the data of file 2.txt
	fp3 = fopen("3.txt", "w"); //writing the data in file 3.txt

	StoreFileData(fp1, fp3); //Storing the data of fp1 in fp3
	StoreFileData(fp2, fp3); //Storing the data of fp2 in fp3

	fclose(fp1); //Closing the file
	fclose(fp2); //Closing the file
	fclose(fp3); //Closing the file

return 0;
}
