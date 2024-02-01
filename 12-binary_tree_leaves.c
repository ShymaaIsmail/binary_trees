#include "binary_trees.h"


/**
* binary_tree_leaves - binary_tree_leaves
* @tree: tree root node
* Return: leaves of tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves += 1;
		}
	}
	return (leaves);
}
