#include "binary_trees.h"
/**
 * binary_tree_rotate_left - binary_tree_rotate_left
 * @tree: tree to rotate
 * Return: rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *current;

	if (tree == NULL)
	{
		return (NULL);
	}
	current = tree->right;
	tree->parent = current;
	current->parent = NULL;
	tree->right = current->left;
	current->left = tree;

	return (current);
}
