#include "binary_trees.h"
/**
 * binary_tree_balance - This checks to see if a binary tree is balanced
 * @tree: The pointer to the stucture
 * Return: return
 */
size_t height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height, diff;

	if (tree == NULL)
	{
		return (0);
	}
	l_height = height(tree->left);
	r_height = height(tree->right);
	diff = l_height - r_height;
	return (diff);
}

/**
 * height - This gets the height of a binary tree
 * @tree: pointer to the struct
 * Return: Always 0 (Success)
 */

size_t height(const binary_tree_t *tree)
{
	int hl, hr;

	if (tree == NULL)
		return (0);
	hl = height(tree->left);
	hr = height(tree->right);
	if (hl > hr)
	{
		return (hl + 1);
	}
	else
		return (hr + 1);
}
