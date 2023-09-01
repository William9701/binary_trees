#include "binary_trees.h"
/**
 * bst_remove - bst_remove
 * @root: root tree
 * @value: value to be inserted
 * Return: next sucessor after the deltion
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
	{
		return (root);
	}
	else if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
	}
	else if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
	}
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			free(root);
			root = NULL;
		}
		else if (root->left == NULL)
		{
			bst_t *temp = root;

			root = root->right;
			free(temp);
		}
		else if (root->right == NULL)
		{
			bst_t *temp = root;

			root = root->left;
			free(temp);
		}
		else
		{
			bst_t *temp = Findmin(root->right);

			root->n = temp->n;
			root->right = bst_remove(root->right, temp->n);
		}
	}
	return (root);
}
/**
 * Findmin - find the min value
 * @root: the tree to search in
 * Return: the lowest value
 */
bst_t *Findmin(bst_t *root)
{
	if (root == NULL)
	{
		return (root);
	}
	while (root->left != NULL)
	{
		root = root->left;
	}
	return (root);
}
