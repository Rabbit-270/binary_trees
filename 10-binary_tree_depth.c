#include "binary_trees.h"
/**
 * binary_tree_depth - counts the depth of a node in a binary tree
 * @tree: pointer to the specific node.
 * Return: 0 or depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t counter = 0;
	binary_tree_t *nodePtrcntr = (binary_tree_t *)tree;

	while (nodePtrcntr->parent != NULL)
	{
		counter += 1;
		nodePtrcntr = nodePtrcntr->parent;
	}
	return (counter);
}

