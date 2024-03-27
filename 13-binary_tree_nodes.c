#include "binary_trees.h"
/**
 * binary_tree_nodes - Checks number of nodes with at least one child
 *
 * @tree: Pointer to the root of the binary tree
 *
 * Return: Number of nodes in the tree with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right, size;

	if (!tree)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	size = left + right;

	if (tree->left || tree->right || (tree->right && tree->left))
		return (size + 1);

	return (size);
}
