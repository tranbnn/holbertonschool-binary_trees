#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: the parent of the new node
 * @value: the value to store in the new node
 * Return: pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->parent = parent;
	if (parent->left)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	else
		newnode->left = NULL;
	newnode->right = NULL;
	parent->left = newnode;

	return
		(newnode);
}
