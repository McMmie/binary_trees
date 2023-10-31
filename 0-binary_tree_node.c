#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to be created
 * @value: the value of the node
 *
 * Return: a pointer to the new node or null on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
	{
		parent = new_node;
		new_node->parent = NULL;
	}
	else
		new_node->parent = parent;

	return (new_node);
}
