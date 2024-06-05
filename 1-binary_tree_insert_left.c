#include "binary_trees.h"
#include<stdlib.h>
/**
 * binary_tree_insert_left - creates a left child node for the parent node.
 * @parent: parent node to insert for.
 * @value: value of the node.
 * Return: NULL or newNode pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode != NULL)
	{
		newNode->n = value;
		newNode->parent = parent;
		if (parent != NULL)
		{
			if (parent->left == NULL)
			{
				parent->left = newNode;
			}
			else
			{
				newNode->left = parent->left;
				parent->left = newNode;
			}
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (newNode);
}

