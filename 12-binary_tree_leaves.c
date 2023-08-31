#include "binary_trees.h"

/**
 * binary_tree_leaves - binary_tree_leaves
 * @tree: tree
 * Return: size
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (tree == NULL)
	{
		return (0); /*Empty subtree has height -1*/
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_size = binary_tree_leaves(tree->left);
	right_size = binary_tree_leaves(tree->right);

	return (left_size + right_size);
}
