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
			binary_tree_t *temp = parent->left;

			node->n = value;
			node->left = NULL;
			node->right = NULL;
			if (temp == NULL)
			{
				node->parent = parent;
				parent->left = node;
			}
			else
			{
				node->parent = parent;
				node->left = temp;
				parent->left = node;
				temp->parent = node;
			}
		}
	}
	return (node);
}
