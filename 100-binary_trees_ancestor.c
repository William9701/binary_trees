#include "binary_trees.h"
/**
 * binary_trees_ancestor - binary_trees_ancestor
 * @first: first node
 * @second: second node to check
 * Return: the ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	ancestor = first;

	while (ancestor != NULL)
	{
		if (is_ancestor(ancestor, second))
		{
			return ((binary_tree_t *)ancestor);
		}
		ancestor = ancestor->parent;
	}

	return (NULL);
}
/**
 * is_ancestor -is_ancestor
 * @root: root
 * @node: node
 * Return: node
 */
int is_ancestor(const binary_tree_t *root, const binary_tree_t *node)
{
	if (root == NULL)
	{
		return (0);
	}

	if (root == node)
	{
		return (1);
	}

	return (is_ancestor(root->left, node) || is_ancestor(root->right, node));
}
