#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary treee
 * @tree: the tree to count
 * Return: the number of leaves or 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		count += 1;
	}

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
