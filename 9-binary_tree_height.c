#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
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
			lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lt > rt) ? lt : rt);
	}
}
