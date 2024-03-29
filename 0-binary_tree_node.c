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
		node->parent = NULL;
		node->left = NULL;
		node->right = NULL;
		if (parent != NULL)
		{
			if (parent->left == NULL || parent->right == NULL)
				node->parent = parent;
			if (parent->left == NULL)
				parent->left = node;
			if (parent->right == NULL)
				parent->right = node;
		}
	}
	return (node);
}
