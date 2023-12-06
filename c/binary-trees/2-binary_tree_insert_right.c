#include "binary_trees.h"

/**
 * binary_tree_insert_right- insertsa node in the left
 * @parent: parentnode
 * @value: value of the node
 * Return: binary tree node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *aux = NULL;

	if (!parent)
		return (NULL);
	aux = parent->right;
	node = binary_tree_node(parent, value);
	if (node)
	{
		node->right = aux;
		if (aux)
			aux->parent = node;
		parent->right = node;
	}
	return (node);
}
