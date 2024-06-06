#include "binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_is_leaf - checks if a node is a leaf or not.
 * @node: node to check.
 * Return: 0 or 1.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}

