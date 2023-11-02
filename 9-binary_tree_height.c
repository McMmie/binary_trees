#include <stdlib.h>
#include "binary_trees.h>"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0;

	binary_tree_height(tree->left);
	binary_tree_height(tree->right);
	i++;

	return (i);
