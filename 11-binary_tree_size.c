#include "binary_trees.h"
/**
 * binary_tree_size - This finds the size of a binary tree by
 * @tree: This is a pointer to the struct
 * Return: fgd
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
