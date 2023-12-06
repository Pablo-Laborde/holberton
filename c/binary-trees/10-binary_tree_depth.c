#include "binary_trees.h"

/**
 * binary_tree_depth- calculates depth of a tree
 * @tree: tree
 * Return: trees depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_depth(tree->parent));
}

/**
 * _depth- calculates depth of a tree
 * @tree: tree
 * Return: trees depth
 */
size_t _depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + _depth(tree->parent));
}
