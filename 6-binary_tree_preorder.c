#include "binary_trees.h"
/**
 * binary_tree_preorder - binary_tree_preorder
 * @tree: the tree to in entered into
 * @func: function to run the tree on
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, (func));
		binary_tree_preorder(tree->right, (func));
	}
}
