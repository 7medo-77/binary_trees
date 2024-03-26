#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Creates a node in a binary tree
 *
 * @node: Node to be examined
 *
 * Return: 1 if node IS leaf
 *		   0 if node IS NOT leaf OR node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left || node->right || (node->right && node->left))
		return (1);
	else
		return (0);
}
