#include "binary_trees.h"
#include<stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right child of a node.
 * @parent : Pointer to parent node
 * @value : value stored in the new node.
 * Return: NULL upon failure or the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = value;

		if (parent->right == NULL)
		{
			parent->right = newNode;
		}
		else
		{
			newNode->right = parent->right;
			parent->right = newNode;
		}
	}
	newNode->parent = parent;
	return (newNode);
}

