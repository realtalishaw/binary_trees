#include "binary_trees.h"
/**
 * binary_tree_balance - balance
 * @tree: fs
 * Return: return
 */
size_t height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = height(tree->left);
	r_height = height(tree->right);
       	return (l_height - r_height);
}

/**
 * height - Entry point
 * @tree: tree
 * Return: Always 0 (Success)
 */

size_t height(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (tree == NULL)
		return (-1);
	hl = height(tree->left);
	hr = height(tree->right);
	if (hl > hr)
	{
		return (hl + 1);
	}
	else
		return (hr + 1);
}
