#include "binary_trees.h"

/**
 * binary_tree_nodes - binary_tree_nodes
 * @tree: tree
 * Return: size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*Check if the current node has at least one child*/
	int has_child = (tree->left != NULL) || (tree->right != NULL);

	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);


	return (left_nodes + right_nodes + has_child);
}
