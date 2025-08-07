#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the pointer to the parent node
 * @value: value to insert new node
 * Return: new node pointer or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
