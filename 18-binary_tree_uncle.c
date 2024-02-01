#include "binary_trees.h"
#include "binary_trees.h"


/**
* binary_tree_uncle - binary_tree_uncle
* @node: tree node
* Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node != NULL && node->parent != NULL
		&& node->parent->parent != NULL)
	{
		uncle = node->parent->parent->left == node ?
					node->parent->parent->right : node->parent->parent->left;
	}
	return (uncle);
}
