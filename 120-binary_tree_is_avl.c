#include "binary_trees.h"

/**
 * binary_tree_is_avl - binary_tree_is_avl
 * @tree: tree
 * Return: size
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int left_nodes = 0;
	int right_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = tree_height(tree->left);
	right_nodes = tree_height(tree->right);

	if ((left_nodes - right_nodes == 0 || left_nodes - right_nodes == -0 ||
			left_nodes - right_nodes == 1) &&
			(binary_tree_is_bst(tree) == 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_bst_helper - is_bst_helper
 * @node:node
 * @min: min
 * @max: max
 * Return: int
 */
int is_bst_helper(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
	{
		return (1);
	}

	if (node->n <= min || node->n >= max)
	{
		return (0);
	}

	return (is_bst_helper(node->left, min, node->n) &&
			is_bst_helper(node->right, node->n, max));
}

/**
 * binary_tree_is_bst - binary_tree_is_bst
 * @tree: tree
 * Return: integer
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*Use INT_MIN and INT_MAX as initial minimum and maximum values*/
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

/**
 * tree_height - tree_height
 * @tree: tree to get height
 * Return: the height
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? 1 + tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + tree_height(tree->right) : 1;

	return ((left_height > right_height) ? left_height : right_height);
}
