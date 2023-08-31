#include "binary_trees.h"
/**
 * is_bst_helper - is_bst_helper
 * @node: node
 * @min: min
 * @max: max
 * Return: 1 or 0
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

