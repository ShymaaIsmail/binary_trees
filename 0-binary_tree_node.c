#include "binary_trees.h"

/**
* binary_tree_node - binary_tree_node
* @parent: parent node
* @value: value
* Return: node pointer
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node != NULL)
	{
		node->n = value;
		if (parent != NULL)
		{
			node->parent = parent;
            parent->left = node;
		}
	}
	return (node);
}
