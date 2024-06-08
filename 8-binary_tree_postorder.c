#include "binary_trees.h"
/**
 * void binary_tree_postorder - goes through a binary tree using post-order traversal.
 * @tree: tree to go through.
 * @func:  pointer to a function to call for each node.
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
