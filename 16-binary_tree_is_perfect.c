#include "binary_trees.h"


/**
* get_tree_height - get_tree_height
* @tree: tree node
* Return: int for height
*/
size_t get_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0, max_height = 0;

	if (tree != NULL)
	{
		left_height = get_tree_height(tree->left);
		right_height = get_tree_height(tree->right);
		max_height = (left_height > right_height) ? left_height : right_height;
		if (tree->left != NULL || tree->right != NULL)
		{
			height = 1 + max_height;
		}
		else
		{
			height = max_height;
		}
	}
	return (height);
}


/**
* binary_tree_is_perfect - binary_tree_is_perfect
* @tree: tree node
* Return: 1 or 0 is perfect flag allnodes are perfect with 2 childs
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
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
