#include "binary_trees.h"
/**
 * count_levels - calculates the depth of a node.
 * @node: node to calculate for.
 * Return: 1 or 1+ number.
 */
int count_levels(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	int right;
	int left;

	right = 1 + count_levels(node->right);
	left = 1 + count_levels(node->left);
	if (right < left)
	{
		return (left);
	}
	if (right > left)
	{
		return (right);
	}
	return (right);
}
/**
 * binary_tree_height - calculates the height of a given tree.
 * @tree: a pointer of the root of the tree
 * Return: 0 or actual height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = count_levels(tree->left);
	int right_height = count_levels(tree->right);

	if (left_height > right_height)
	{
		return (left_height);
	}
	else if (right_height > left_height)
	{
		return (right_height);
	}
	return (right_height);
}

