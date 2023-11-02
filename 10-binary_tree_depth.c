#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: Depth of the tree, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	
	binary_tree_depth(tree->left);
	binary_tree_depth(tree->right);

	return depth++;
}
