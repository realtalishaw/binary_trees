#include "binary_trees.h"

/**
 * findMax - Entry point
 * @a: a
 * @b: b
 * Return: Always 0 (Success)
 */

int findMax(int a, int b);

int findMax(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - some height stuff
 * @tree: tree
 * Return: something I'm sure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	return (findMax(binary_tree_height(tree->left),
binary_tree_height(tree->right)) + 1);
}
