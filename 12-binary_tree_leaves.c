#include "binary_trees.h"
/**
 * binary_tree_leaves - Checks number of leaves in a tree
 *
 * @tree: Pointer to the root of the binary tree
 *
 * Return: Number of nodes in the tree from
 *		   the passed node and downwards
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (!tree)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	size = left + right;

	if (!tree->left && !tree->right)
		return (1);

	return (size);
}
