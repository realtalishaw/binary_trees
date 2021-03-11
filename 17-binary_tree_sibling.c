#include "binary_trees.h"

/**
 * binary_tree_sibling - This checks to see ifa node is a sibiling
 * @node: node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
	return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
