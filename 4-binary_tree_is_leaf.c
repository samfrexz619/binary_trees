#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks for leaf node
 * @node: pointer
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int lf = 0;

	if (node && !(node->left) && !(node->right))
		lf = 1;

	return (lf);
}
