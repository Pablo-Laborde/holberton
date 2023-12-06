#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect- checks if tree is perfect
 * @tree: tree
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_height(tree->left) == binary_tree_height(tree->right))
				&& (binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right)))
		return (1);
	return (0);
}

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

/**
 * binary_tree_leaves- calculates amount of leaves
 * @tree: tree
 * Return: amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
