#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = -1;
	size_t right = -1;

	if (tree == NULL)
		return (0);
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		left++;
		right++;

	}
	if (left > right)
		return (left);
	else
		return (right);
}
