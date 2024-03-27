#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks whether a node is leaf or not
 *						 returns 1 if root, otherwise returns 0
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

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
