#include "binary_trees.h"

/**
 * binary_tree_preorder - prints the values in nodes in preorder.
 * @tree: pointer to the root of the tree
 * @func: function pointer passed as parameter
 * Return: nothing.
 */
void binary_tree_preorder(binary_tree_t *tree, void (*func)(int))
{
	if ((*func) != NULL && tree != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, (*func));
		binary_tree_preorder(tree->right, (*func));
	}
}

