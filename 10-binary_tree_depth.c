#include "binary_trees.h"
/**
 * binary_tree_depth - Checks height of tree from the node
 *
 * @tree: Pointer to the root of the binary tree
 *
 * Return: depth of the tree from the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (-1);

	depth = binary_tree_depth(tree->parent);
	// depth = left - 1 >= right - 1 ? left - 1 : right - 1;

	return (depth + 1);
}
