#include "binary_trees.h"
/**
 * binary_tree_insert_left - This inserts a node as the left child
 * @parent: This is the parent node
 * @value: This is the value that is to be inserted
 * Return: The pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL, *prev = NULL;

	if (parent == NULL)
	return (NULL);

	n_node = binary_tree_node(parent, value);

	if (!n_node)
	return (NULL);

	if (parent->left != NULL)
	{
	prev = parent->left;
	if (prev)
	{
		n_node->left = prev;
		prev->parent = n_node;
	}

	}
	parent->left = n_node;

	return (n_node);

}
