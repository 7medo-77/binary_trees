#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks whether a node is root or not
 *						 returns 1 if root, otherwise returns 0
 *
 * @node: Node to be examined
 *
 * Return: 1 if node IS root
 *		   0 if node IS NOT root OR node is NULL
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
