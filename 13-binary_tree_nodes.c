#include "binary_trees.h"


/**
* binary_tree_nodes - binary_tree_nodes
* @tree: tree root node
* Return: nodes of tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		if (tree->left != NULL || tree->right != NULL)
		{
			nodes += 1;
		}
	}
	return (nodes);
}
