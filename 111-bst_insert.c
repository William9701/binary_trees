#include "binary_trees.h"

/**
 * bst_insert - bst_insert
 * @tree: double pointer to tree
 * @value: value of the node
 * Return: pointer to the newly created node
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *new;

	if (tree != NULL)
	{
		current = *tree;
		if (current == NULL)
		{
			new = binary_tree_node(current, value);
			if (new == NULL)
			{
				return (NULL);
			}
			return (*tree = new);
		}
		if (value == current->n)
		{
			return (NULL);
		}
		else if (value < current->n)
		{
			if (current->left != NULL)
			{
				return (bst_insert(&current->left, value));
			}
			new = binary_tree_node(current, value);
			if (new == NULL)
			{
				return (NULL);
			}
			return (current->left = new);
		}
		else
		{
			if (current->right != NULL)
			{
				return (bst_insert(&current->right, value));
			}
			new = binary_tree_node(current, value);
			if (new == NULL)
			{
				return (NULL);
			}
			return (current->right = new);
		}
	}
	return (NULL);
}
