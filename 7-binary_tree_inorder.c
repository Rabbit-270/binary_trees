#include "binary_trees.h"

/**
 * binary_tree_inorder - prints a binary tree inorder.
 * @tree: root node of the binary tree.
 * @func: function pointer
 * Return: nothing
 */
void binary_tree_inorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && (*func) != NULL)
	{
		binary_tree_inorder(tree->left, func);
		(*func)(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

