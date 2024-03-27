#include "binary_trees.h"
/**
 * binary_tree_postorder - Preorder traversal of binary tree
 *
 * @tree: Pointer to the root of the binary tree
 * @func: Function pointer to retrieve value inside a node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

