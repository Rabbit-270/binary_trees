#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete- Deletes a non-empty binary tree
 * @tree: pointer to root of tree
 * Return: NULL if tree is empty.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_t *left = tree->left;
	binary_tree_t *right = tree->right;

	if (left == NULL && right == NULL)
	{
		free(tree);
		return;
	}
	else if (left != NULL)
	{
		binary_tree_delete(left);
	}
	else if (right != NULL)
	{
		binary_tree_delete(right);
	}
	free(tree);
}

