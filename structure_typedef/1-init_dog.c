#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/** 
 * init_dog - initialision 
 * @d: thr information of the dog 
 * @name: name of dog 
 * @age:age of dog
 * @owner: owner of dog 
 *
 * return Alaways 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d) 
		return; 
	d->name = name;
	d->age = age;
	d->owner = owner;
}

