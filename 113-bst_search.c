#include "binary_trees.h"
/**
 * bst_search - bst_search
 * @tree: tree to search
 * @value: value
 * Return: found value or null if not found
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}
	if (tree->n == value)
	{
		return ((bst_t *)tree);
	}
	else if (value > tree->n)
	{
		return (bst_search(tree->right, value));
	}
	else
	{
		return (bst_search(tree->left, value));
	}
}
