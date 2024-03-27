#include "binary_trees.h"
/**
 * binary_tree_preorder - Preorder traversal of binary tree
 *
 * @tree: Pointer to the root of the binary tree
 * @func: Function pointer to retrieve value inside a node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
