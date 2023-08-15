#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: struct data type variable
 * @name: char variable
 * @age: float variable
 * @owner: char variable
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	d->owner = owner;
}
