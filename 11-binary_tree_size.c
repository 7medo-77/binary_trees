#include "binary_trees.h"
/**
 * binary_tree_size - Checks size of the tree (number of nodes)
 *					  form the node passed to the argument and downwards
 *
 * @tree: Pointer to the root of the binary tree
 *
 * Return: Number of nodes in the tree from
 *		   the passed node and downwards
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right;

	return (size + 1);
}
