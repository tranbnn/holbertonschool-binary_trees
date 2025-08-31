#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to balance
 * Return: 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	left_height = 0;
	right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: size_t or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countleft;
	size_t countright;

	countleft = 0;
	countright = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	countleft = binary_tree_height(tree->left);
	countright = binary_tree_height(tree->right);

	if (countleft >= countright)
	{
		return (countleft + 1);
	}
	else
	{
		return (countright + 1);
	}
}
