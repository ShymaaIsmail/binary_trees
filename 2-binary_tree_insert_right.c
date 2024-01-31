#include "binary_trees.h"

/**
* binary_tree_insert_right - binary_tree_insert_right
* @parent: parent node
* @value: value
* Return: node pointer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent != NULL)
	{
		node = malloc(sizeof(binary_tree_t));
		if (node != NULL)
		{
			binary_tree_t *temp = parent->right;

			node->n = value;
			node->right = NULL;
			node->left = NULL;
			if (temp == NULL)
			{
				node->parent = parent;
				parent->right = node;
			}
			else
			{
				node->parent = parent;
				node->right = temp;
				parent->right = node;
				temp->parent = node;
			}
		}
	}
	return (node);
}
