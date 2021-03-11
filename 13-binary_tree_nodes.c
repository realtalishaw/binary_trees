#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
    	return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
