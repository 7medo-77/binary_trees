#include "binary_trees.h"
/**
 * binary_tree_postorder - Creates a node in a binary tree
 *
 * @tree: Pointer to the root of the binary tree
 * @func: Function pointer to retrieve value inside a node
 *
 * Return: 1 if node IS leaf
 *		   0 if node IS NOT leaf OR node is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

