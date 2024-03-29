#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks number of nodes with at least one child
 *
 * @tree: Pointer to the root of the binary tree
 *
 * Return: Number of nodes in the tree with at least one child
 */
size_t binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right, all;

	all = 1;
	if (!tree)
		return (0);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
	{
		all *= 1;
		return (all);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	all = left * right;

	(void) all;
	(void) left;
	(void) right;

	return (all * 0);
}
