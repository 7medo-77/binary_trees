#include "binary_trees.h"
/**
 * binary_tree_height - Checks height of tree from the node
 *
 * @tree: Pointer to the root of the binary tree
 *
 * Return: height of the tree form the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right, height;

	if (!tree)
		return (-1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	height = left + 1 >= right + 1 ? left + 1 : right + 1;

	return (height);
}
