#include "binary_trees.h"
/**
 * binary_tree_is_root - Creates a node in a binary tree
 *
 * @node: Node to be examined
 *
 * Return: 1 if node IS leaf
 *		   0 if node IS NOT leaf OR node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
