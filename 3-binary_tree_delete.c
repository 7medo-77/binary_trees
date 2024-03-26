#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a whole binary tree
 *
 * @tree: pointer to the root node of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		free(tree);
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
}
