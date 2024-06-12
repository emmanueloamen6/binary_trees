#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree
 * Return: return 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left = binary_tree_depth(tree->left);
	h_right = binary_tree_depth(tree->right);

	if ((h_left - h_right) == 0)
		return (1);

	return (0);
}
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: tree of the node
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
