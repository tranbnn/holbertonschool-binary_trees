#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 * @tree: the tree to count
 * Return: the number of nodes, or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
