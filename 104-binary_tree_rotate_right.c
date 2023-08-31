#include "binary_trees.h"
/**
 * binary_tree_rotate_right - binary_tree_rotate_right
 * @tree: tree to rotate
 * Return: rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *current;

	current = tree->left;
	tree->parent = current;
	current->parent = NULL;
	tree->left = current->right;
	current->right = tree;

	return (current);
}
