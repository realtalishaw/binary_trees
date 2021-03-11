#include "binary_trees.h"

/**
 * binary_tree_uncle - This function check to see if a node is an uncle.
 * @node: the node that is passed
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
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
