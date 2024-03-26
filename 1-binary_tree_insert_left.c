#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates a node in a binary tree
 *
 * @value: Integer to be stored in the node
 * @parent: Pointer to the parent node
 *
 * Return: pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	node->right = NULL;

	if (!parent->left)
	{
		node->parent = parent;
		parent->left = node;
		node->left = NULL;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		node->parent = parent;
		parent->left = node;
	}

	return (node);
}
