#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle- returns sibling
 * @node: tree
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling- returns sibling
 * @node: tree
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
