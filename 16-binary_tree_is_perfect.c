#include "binary_trees.h"


/**
* get_tree_height - get_tree_height
* @tree: tree node
* Return: int for height
*/
int get_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_height = get_tree_height(tree->left);

	int right_height = get_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_is_perfect - binary_tree_is_perfect
* @tree: tree node
* Return: 1 or 0 is perfect flag allnodes are perfect with 2 childs
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_perfect = 0, left_height = 0, right_height = 0;

	if (tree != NULL)
	{
		left_height = get_tree_height(tree->left);
		right_height = get_tree_height(tree->right);
		is_perfect = left_height == right_height;
	}
	return (is_perfect);
}
