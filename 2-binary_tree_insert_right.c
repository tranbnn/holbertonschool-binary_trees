#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of the new node
 * @value: the value to insert in the new node
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t newnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode == malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	if (parent->)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	else
		newnode->right = NULL;
	newnode->left = NULL;
	parent->right = newnode;

	return (newnode);
}
