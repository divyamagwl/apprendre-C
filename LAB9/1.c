#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
if (argc == 4) //number of command line arguments should be equal to 4
{
	if (*argv[3] == '+') // if the ascii value of the operator matches with the fourth command line argument ascii value
		printf("%d", atoi(argv[1]) + atoi(argv[2])); //converting strings to integer using atoi function then operating on the numbers
	else if (*argv[3] == '-')
		printf("%d", atoi(argv[1]) - atoi(argv[2]));
	else if (*argv[3] == '*')
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
	else if (*argv[3] == '/')
		if (atoi(argv[2]) != 0) //third command line argument should not be 0 in case in case of division
			printf("%d", atoi(argv[1]) / atoi(argv[2]));
}

return 0;
}

