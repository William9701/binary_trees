#include "binary_trees.h"
int tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - binary_tree_balance
 * @tree: tree
 * Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_nodes;
	int right_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = 0;
	right_nodes = 0;

	left_nodes = tree_height(tree->left);
	right_nodes = tree_height(tree->right);

	return (left_nodes - right_nodes);
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
