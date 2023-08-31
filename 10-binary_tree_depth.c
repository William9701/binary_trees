#include "binary_trees.h"

/**
 * binary_tree_depth - binary_tree_depth
 * @tree: tree to chk
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;
	const binary_tree_t *current;

	if (tree == NULL)
	{
		return (0); /*Empty subtree has height -1*/
	}

	count = 0;

	current = tree;

	while (current->parent != NULL)
	{
		count++;
		current = current->parent;
	}

	return (count);
}
