#include "binary_trees.h"
/**
 * binary_tree_inorder - Creates a node in a binary tree
 *
 * @tree: Pointer to the root of the binary tree
 * @func: Function pointer to retrieve value inside a node
 *
 * Return: 1 if node IS leaf
 *		   0 if node IS NOT leaf OR node is NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

