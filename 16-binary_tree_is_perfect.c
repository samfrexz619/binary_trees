#include "binary_trees.h"
/**
 * perfect_tree - function to check if a tree is perfect
 * @tree: tree
 * Return: 0 or other num
 */
int perfect_tree(const binary_tree_t *tree)
{
	int lt = 0, rt = 0;

	if (tree->left && tree->right)
	{
		lt = 1 + perfect_tree(tree->left);
		rt = 1 + perfect_tree(tree->right);
		if (rt == lt && rt != 0 && lt != 0)
			return (rt);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = perfect_tree(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}
