#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: tree to measure its height.
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		}
	}
	return ((l > r) ? l : r);
}
