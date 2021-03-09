#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int findMax(int a, int b);
int findMax(int a, int b){
	if(a >= b)
		return a;
	return b;
}
size_t binary_tree_height(const binary_tree_t *tree)
{
	if(tree == NULL || (tree->right == NULL && tree->left == NULL))
		return 0;

	return (findMax(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);
}
