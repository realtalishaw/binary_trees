#include "binary_trees.h"
/**
 * depth - This check to see if a binary tree is full.
 * @tree: This is a structure.
 *
 * Return: 0 if NULL and 0 if
 */
int depth(const binary_tree_t *tree)
{
	int d;

	for (d = 0; tree != NULL; d++)
		tree = tree->left;

	return (d);
}

/**
* perfect - Check to make sure that a binary tree is perfect
* @tree: The pointer to the structure
* @d: This is the depth
* @level: level
* Return: Always 0 (Success)
*/

int perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfect(tree->left, d, level + 1) &&
perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - This checks to see if a binary tree is perfect.
 * @tree: This is a pointer to the structre.
 *
 * Return: 0 for if NULL and one for success
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (!tree)
		return (0);

	d = depth(tree);

	if (perfect(tree, d, 0))
		return (1);
	return (0);
}
