#include "binary_trees.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 *
 * @value: Integer to be stored in the node
 * @parent: Pointer to the parent node
 *
 * Return: pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_node));
	if (!node)
		return (NULL);

	parent->n = value;

	return (node);
}
