#include "binary_trees.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);

	return (0);
}
