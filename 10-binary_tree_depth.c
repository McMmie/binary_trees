#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: Depth of the tree, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);

	temp = tree;
	while (temp->parent != NULL)
	{
		depth++;
		temp = temp->parent;
	}

	return (depth);
}
