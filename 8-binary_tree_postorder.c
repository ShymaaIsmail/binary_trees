#include "binary_trees.h"

/**
* binary_tree_postorder - binary_tree_postorder
* @tree:  node
* @func: variadic function
* Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		binary_tree_postorder(tree, func);
		func(tree->n);
	}
}
