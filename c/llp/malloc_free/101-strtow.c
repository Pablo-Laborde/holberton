#include <stdlib.h>

/**
 * struct word- structure
 * @pos: data
 * @length: data
 * @n_word: pointer
 */
typedef struct word {
	int pos, length;
	struct word *n_word;
} *word_t;

void free_str(char **str_p, int n);
word_t init_list(int pos, int length, word_t p_word);
void free_list(word_t w);

/**
 * strtow- function
 * @str: input
 * Return: char**
 */
char **strtow(char *str)
{
	/* var declaration */
	int i, count, length, flag;
	char **str_p;

	/* code */
	if (str == NULL || str == "")
		return (NULL);
	i = 0;
	count = 0;
	if (str[0] == ' ')
		flag = 0;
	else
		flag = 1;
	while (str[i] != '\0')
	{
		length = 0;
		if (flag == 0)
		{
			while (str[i] == ' ')
				i++;
			flag = 1;
		}
		else
		{
			count++;
			length = i;
			while (str[i] != '\0' && str[i] != ' ')
				i++;
			length = (i - length + 1);
			flag = 0;
		}
	}
	str_p = malloc(sizeof(char**) * (count + 1));
	if (str_p == NULL)
		return (NULL);
}

/**
 * free_str- function
 * @str_p: input
 * @n: input
 * Return: void
 */
void free_str(char **str_p, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (str_p[i] != NULL)
			free(str_p[i]);
	free(str_p);
}

/**
 * init_list- fucntion
 * @pos: input
 * @length: input
 * @p_word: input
 * Return: pointer;
 */
word_t init_list(int pos, int length, word_t p_word)
{
	word_t w;

	w = malloc(sizeof(word_t));
	w->pos = pos;
	w->length = length;
	w->n_word = NULL;
	if (p_word != NULL)
		p_word->n_word = w;
	return (w);
}

/**
 * free_list- fucntion
 * @w: input
 * Return: void
 */
void free_list(word_t w)
{
	word_t aux;

	if (w != NULL)
	{
		while (w->n_word != NULL)
		{
			aux = w;
			w = w->n_word;
			free(aux);
		}
		free(w);
	}
}
