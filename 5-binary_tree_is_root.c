#include "binary_trees.h"
#include<stdio.h>

/**
 * binary_tree_is_root - checks if a node is root not a parent.
 * @node: node to check.
 * Return: NULL or 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}

