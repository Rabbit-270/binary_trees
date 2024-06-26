#include"binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_delete - Deletes a non-empty binary tree.
 * @tree: pointer to root of tree.
 * Return: nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

