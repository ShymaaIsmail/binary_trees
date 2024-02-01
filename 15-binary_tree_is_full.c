#include "binary_trees.h"


/**
* binary_tree_is_full - binary_tree_is_full
* @tree: tree node
* Return: 1 or 0 is full flag allnodes are full with 2 childs
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0, left_full = 0, right_full = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
		{
			left_full = binary_tree_is_full(tree->left);
			right_full = binary_tree_is_full(tree->right);
			is_full = left_full && right_full;
		}
		else if (tree->left == NULL && tree->right == NULL)
		{
			is_full = 1;
		}
	}
	return (is_full);
}
