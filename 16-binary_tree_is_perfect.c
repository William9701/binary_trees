#include "binary_trees.h"

/**
 * binary_tree_is_perfect - binary_tree_is_perfect
 * @tree: tree
 * Return: size
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_nodes = 0;
	int right_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = tree_height(tree->left);
	right_nodes = tree_height(tree->right);

	if (left_nodes == right_nodes)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
