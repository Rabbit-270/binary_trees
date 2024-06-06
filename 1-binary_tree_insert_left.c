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

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}

