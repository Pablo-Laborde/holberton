#include "binary_trees.h"

/**
 * binary_tree_height- calculates height of a tree
 * @tree: tree
 * Return: trees height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sl, sr;

	if (!tree)
		return (0);
	sl = binary_tree_height(tree->left);
	sr = binary_tree_height(tree->right);
	if (!tree->parent)
		return ((sl >= sr) ? (sl) : (sr));
	return ((sl >= sr) ? (1 + sl) : (1 + sr));
}
