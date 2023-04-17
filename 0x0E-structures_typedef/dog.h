#ifndef DOG_H
#define DOG_H
/**
 * struct dog - function name
 * @name: parameter for char data type
 * @age: parameter for float data type
 * @owner: parameter for char data type
 *
 * Description: this function takes 3 members and prints to screen when called
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
