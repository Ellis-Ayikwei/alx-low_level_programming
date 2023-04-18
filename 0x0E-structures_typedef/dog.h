#ifndef DOG_H
#define DOG_H
/**
  *struct dog - a struct that hold the
  *dogs name and others.
  *@name: dogs name.
  *@age: the age of the dog.
  *@owner: owner name of the dog`
  */



struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
