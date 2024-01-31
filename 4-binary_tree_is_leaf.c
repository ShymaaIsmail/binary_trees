#include "binary_trees.h"

/**
* binary_tree_is_leaf - binary_tree_is_leaf
* @node:  node
* Return: int 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = 0;

	if (node != NULL && node->left  ==  NULL && node->right == NULL)
	{
		is_leaf = 1;
	}
	return (is_leaf);
}
