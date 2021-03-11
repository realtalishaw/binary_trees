#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl, hr;
    if(tree == NULL)
		return (-1);
    hl = binary_tree_height(tree->left);
    hr = binary_tree_height(tree->right);
    if (hl > hr)
    {
        return (hl + 1);
    }
    else
	    return (hr + 1);

}
