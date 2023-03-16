/* this program prints all sizes of data */
#include <stdio.>
/**
 * main - entry point
 *
 * Description: This is the point of execution
 * int - gives the value of the integer
 * float - give the value of the float
 * char - give the value of the character
 * long int - give the value of the long int
 * long long - gives the value of the long long
 *
 * Return: Always gives a zero value to show success
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintType;
	long long longlongType;
	float floatType;

	/**
	 * sizeof - this function is used to evaluate
	 * the size of a variable
	 */
	printf("Size of a char: %d bytes(s)\n", sizeof(charType));
	printf("Size of an int: %d bytes(s)\n", sizeof(integerType));
	printf("Size of a long int: %d bytes(s)\n", sizeof(longintegerType));
	printf("Size of a long long: %d bytes(s)\n", sizeof(longlongType));
	printf("Size of a float: %d bytes(s)\n", sizeof(floatType));

return (0);
}
