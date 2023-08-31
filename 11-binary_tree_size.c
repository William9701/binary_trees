#include "binary_trees.h"

/**
 * binary_tree_size - binary_tree_size
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0); /* Empty subtree has height -1*/
	}

	left_height = tree->left ? binary_tree_size(tree->left) : 0;
	right_height = tree->right ? binary_tree_size(tree->right) : 0;

	return (left_height + right_height + 1);
}
