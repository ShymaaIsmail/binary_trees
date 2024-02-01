#include "binary_trees.h"


/**
* bt_height - bt_height
* @tree: tree root node
* Return: height of tree
*/
size_t bt_height(const binary_tree_t *tree)
{
	size_t height = 0;
	int left_height = 0, right_height = 0, max_height = 0;

	if (tree != NULL)
	{
		left_height = bt_height(tree->left);
		right_height = bt_height(tree->right);
		max_height = (left_height > right_height) ? left_height : right_height;
		if (left_height == -1 || right_height == -1)
		{
		height = -1;
		}
		else
		{
		height = 1 + max_height;
		}
	}
	return (height);
}


/**
* binary_tree_balance - binary_tree_balance
* @tree: tree root node
* Return: height of tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left_height = 0, right_height = 0;

	if (tree != NULL)
	{
	left_height = bt_height(tree->left);
	right_height = bt_height(tree->right);
	balance = left_height - right_height;
	}
	return (balance);
}
