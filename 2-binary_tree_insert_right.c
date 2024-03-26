#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a node in a binary tree
 *
 * @value: Integer to be stored in the node
 * @parent: Pointer to the parent node
 *
 * Return: pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node || !parent)
	{
		if (!parent)
			free(node);
		return (NULL);
	}

	node->n = value;
	node->left = NULL;

	if (!parent->right)
	{
		node->parent = parent;
		parent->right = node;
		node->right = NULL;
	}
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		node->parent = parent;
		parent->right = node;
	}

	return (node);
}
