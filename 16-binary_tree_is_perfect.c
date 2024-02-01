#include "binary_trees.h"


/**
* binary_tree_is_perfect - binary_tree_is_perfect
* @tree: tree node
* Return: 1 or 0 is perfect flag allnodes are perfect with 2 childs
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	if (tree->left == NULL)
		return (1);
	if ((tree->left->left == NULL) != (tree->right->left == NULL))
		return (0);
	if (!binary_tree_is_perfect(tree->left)
		|| !binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
