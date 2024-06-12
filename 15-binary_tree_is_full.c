#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: tree of node
 * Return: 1 if it is full or 0 if otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (!tree->left || !tree->right)
	{
		return (0);
	}
	return (binary_tree_is_full(tree->left) && (binary_tree_is_full(tree->right)));
}
