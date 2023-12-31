#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a strcutre about dogs
 *
 * @name: input
 *
 * @age: float input
 *
 * @owner: int input
 *
 * Description: a structure for a cute dogie
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_scop(char *dest, char *sc);
int _stlr(const char *s);
#endif
