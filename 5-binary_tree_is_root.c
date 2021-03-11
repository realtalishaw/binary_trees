#include "binary_trees.h"
/**
 * binary_tree_is_root - Check to see if a tree node is root
 * @node: stuffs
 * Return: Always 0 (Success)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
