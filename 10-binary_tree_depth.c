#include "binary_trees.h"


/**
* binary_tree_depth - binary_tree_depth
* @tree: tree root node
* Return: depth of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL &&  tree->parent != NULL)
	{
		depth += 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
