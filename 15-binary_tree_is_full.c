#include "binary_trees.h"


/**
* binary_tree_is_full - binary_tree_is_full
* @tree: tree node
* Return: 1 or 0 is full flag allnodes are full with 2 childs
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree != NULL && tree->left != NULL && tree->right != NULL)
	{
		is_full = 1;
	}
	return (is_full);
}
