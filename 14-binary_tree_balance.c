#include "binary_trees.h"
/**
 * 
 * 
 * 
 */
 int binary_tree_balance(const binary_tree_t *tree)
 {
     int l_height = 0, r_height = 0;

     if (tree == NULL)
     {
         return (0);
     }
    l_height += binary_tree_height(tree->left);
    r_height += binary_tree_height(tree->right);
    return (l_height - r_height);
 }
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
