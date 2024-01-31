#include "binary_trees.h"

/**
* binary_tree_insert_left - binary_tree_insert_left
* @parent: parent node
* @value: value
* Return: node pointer
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent != NULL)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node != NULL)
		{
			node->n = value;
			if (parent->left == NULL)
			{
				parent->left = node;
				node->parent = parent;
			}
			else
			{
				binary_tree_t *temp = parent->left;

				parent->left = node;
				node->parent = parent;
				node->left = temp;
				temp->parent = node;
			}
		}
	}
	return (node);
}
