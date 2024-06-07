#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a given tree.
 * @tree: a pointer of the root of the tree
 * Return: 0 or actual height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;
	
	if (tree == NULL)
	{
		return (0);
	}
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left > right) ? left : right);
}

