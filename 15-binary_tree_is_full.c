#include "binary_trees.h"

/**
 * binary_tree_is_full - binary_tree_is_full
 * @tree: tree
 * Return: size
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL && tree->n != 0 &&
			tree->parent != NULL && tree->right != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
