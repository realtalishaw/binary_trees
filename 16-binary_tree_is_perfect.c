#include "binary_trees.h"
/**
 * binary_tree_is_full - This check to see if a binary tree is full.
 * @tree: This is a structure.
 *
 * Return: 0 if NULL and 0 if
 */
 int binary_tree_is_full(const binary_tree_t *tree)
 {
	 if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
 }
 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;
	if(tree == NULL)
		return (0);
	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);
	if (hl > hr)
	{
		return (hl + 1);
	}
	else
		return (hr + 1);

}
/**
 * binary_tree_is_perfect - This checks to see if a binary tree is perfect.
 * @tree: This is stucture being passed.
 *
 * Return: 0 for if NULL and one for success
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, bal, full;

	 if (!tree)
	 	return (0);
	
	left = binary_tree_height(tree);

	right = binary_tree_height(tree);
	bal = left - right;
	full = binary_tree_is_full(tree);

	if (full == 1 && bal == 0)
		return (1);

	else
		return (0);
}
