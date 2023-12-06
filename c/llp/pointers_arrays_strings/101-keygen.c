#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main- funnction
 * Return: int
 */
int main(void)
{
	srand(time(NULL));
	return (rand());
}
