#include "binary_trees.h"

/**
 * binary_tree_node- creates a node
 * @parent: parent of the node
 * @value: value of thenode
 * Return: a binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node)
	{
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
	}
	return (node);
}
