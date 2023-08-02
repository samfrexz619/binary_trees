#include "binary_trees.h"

/**
 * binary_tree_hgt - calc height
 * @tree: tree
 * Return: height
 */

size_t binary_tree_hgt(const binary_tree_t *tree)
{
	size_t lt = 0;
	size_t rt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lt = tree->left ? 1 + binary_tree_hgt(tree->left) : 1;
			rt = tree->right ? 1 + binary_tree_hgt(tree->right) : 1;
		}
		return ((lt > rt) ? lt : rt);
	}
}

/**
 * binary_tree_balance - calc balance
 * @tree: tree
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, sum = 0;

	if (tree)
	{
		left = ((int)binary_tree_hgt(tree->left));
		right = ((int)binary_tree_hgt(tree->right));
		sum = left - right;
	}
	return (sum);
}
