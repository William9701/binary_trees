#include "binary_trees.h"

/**
 * binary_tree_depth - binary_tree_depth
 * @tree: tree to chk
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /*Empty subtree has height -1*/
	}

	size_t count = 0;
	const binary_tree_t *current;

	current = tree;

	while (current->parent != NULL)
	{
		count++;
		current = current->parent;
	}

	return (count);
}
