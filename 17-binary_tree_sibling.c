#include "binary_trees.h"
#include "binary_trees.h"


/**
* binary_tree_sibling - binary_tree_sibling
* @node: tree node
* Return: sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node != NULL && node->parent != NULL)
	{
		sibling = node->parent->left == node ?
					node->parent->right : node->parent->left
	}
	return (sibling);
}
