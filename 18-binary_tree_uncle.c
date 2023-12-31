#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle, otherwise 0
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *daddy;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	daddy = node->parent->parent;

	if (daddy->left == node->parent)
		return (daddy->right);
	else if (daddy->right == node->parent)
		return (daddy->left);

	return (NULL);
}
