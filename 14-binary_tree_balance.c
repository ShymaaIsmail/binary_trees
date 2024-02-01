#include "binary_trees.h"


/**
* binary_tree_height - binary_tree_height
* @tree: tree root node
* Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0, max_height = 0;

	if (tree != NULL)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
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
* binary_tree_balance - binary_tree_balance
* @tree: tree root node
* Return: height of tree
*/
size_t binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance = -1, left_height = 0, right_height = 0;

	if (tree != NULL)
	{
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	balance = left_height - right_height;
	}
	return (balance);
}
