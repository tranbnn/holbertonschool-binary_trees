#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree to meaure
 * Return: the size of the tree or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right));
}
