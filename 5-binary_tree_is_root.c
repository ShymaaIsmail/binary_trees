#include "binary_trees.h"

/**
* binary_tree_is_root - binary_tree_is_root
* @node:  node
* Return: int 1 or 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root = 0;

	if (node != NULL && (node->left  !=  NULL || node->right != NULL))
	{
		is_root = 1;
	}
	return (is_root);
}
