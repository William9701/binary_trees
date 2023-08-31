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
/**
 * tree_height - tree_height
 * @tree: tree to chk
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = 0;
	right_height = 0;

	left_height = tree->left ? 1 + tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + tree_height(tree->right) : 1;

	return ((left_height > right_height) ? left_height : right_height);
}
