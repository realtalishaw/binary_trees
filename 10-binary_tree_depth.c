#include "binary_trees.h"

/**
 * findMax - Finds the max of two ints
 * @a: int a
 * @b: int b
 * Return: Always 0 (Success)
 */

size_t findMax(size_t a, size_t b);

size_t findMax(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	return (b);
}

/**
 * binary_tree_depth - This finds the depth of a tree
 * @tree: pointer to structs
 * Return: fdsfsd
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	for (; tree->parent != NULL; tree = tree->parent)
	{
		depth++;
	}
	return (depth);
}
