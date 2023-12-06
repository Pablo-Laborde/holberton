#include "binary_trees.h"

/**
 * binary_tree_insert_left- insertsa node in the left
 * @parent: parentnode
 * @value: value of the node
 * Return: binary tree node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *aux = NULL;

	if (!parent)
		return (NULL);
	aux = parent->left;
	node = binary_tree_node(parent, value);
	if (node)
	{
		node->left = aux;
		if (aux)
			aux->parent = node;
		parent->left = node;
	}
	return (node);
}
