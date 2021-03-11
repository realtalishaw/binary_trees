#include "binary_trees.h"

/**
 * findMax - Entry point
 * @a: a
 * @b: b
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
 * binary_tree_depth - words words
 * @tree: tree
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
