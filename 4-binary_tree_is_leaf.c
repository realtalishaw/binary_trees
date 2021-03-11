#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Entry point
 * @node: node
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
