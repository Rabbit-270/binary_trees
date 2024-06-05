#include<stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node.
 * @parent: Pointer to the parent of the node to create.
 * @value: value stored in the node that is to be created.
 * Return: New node or NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode != NULL)
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		return (NULL);
	}

	return (newNode);
}

