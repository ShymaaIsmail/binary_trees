#include "binary_trees.h"

/**
* binary_tree_inorder - binary_tree_inorder
* @tree:  node
* @func: variadic function
* Return: void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
