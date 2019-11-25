#include<stdio.h>
#include<stdarg.h>

void put_int(int number) //defining a function to convert a number to string and print it 
{
	char array[1000];
	int count = 0;
	while(number > 0)
	{
		array[count++] = (number % 10) + '0';
		number = number / 10;
	}
	
	for(int i = 0; i < count+1 ; i++)
		putchar(array[count - i]);	
}

void min_print(char* first_argument, ...)
{
	va_list arguments; //variable argument list of all the extra paraneters passed
	char *characters;
	char character_val;  
	int integer_val;

	va_start(arguments, first_argument); //starting the variable argument list from first argument

	characters = first_argument; //characters pointer points to first_argument 
	while(*characters) //check till characters pointer exist
	{
		if (*characters != '%') //whenever character is not % print it and break when it encounters %
		{
			putchar(*characters); 
			characters++;
			continue;
		}

		switch (*++characters) //characters pointer now point to next character of %
		{
			case 'd': //if it is an integer
				integer_val = va_arg(arguments, int); //initialize integer value to the integer argument 
				if(integer_val > 0) 
					put_int(integer_val); //print the integer using the function defined
				else
				{
					putchar('-');
					put_int(-integer_val);
				}
				break;

			case 'c': //if it is a character
				character_val = (char)va_arg(arguments, int); //initialize character value to the character argument
				putchar(character_val); //print the character
				break;
			default : 
				putchar(*characters);
				break;
		}
		characters++;
	}

	va_end(arguments); //end the variable argument list 
}

int main()
{
	min_print("This is a function to print numbers like %d\n", -30);
	return 0;
}

		
