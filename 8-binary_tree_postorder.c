#include "binary_trees.h"
/**
 * binary_tree_postorder - prints the value stored in nodes using postorder.
 * @tree: pointer to root node of the tree.
 * @func: function pointer of a function that will print the values
 * Return: nothing
 */
void binary_tree_postorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}

