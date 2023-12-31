#include "binary_trees.h"

/**
 * binary_tree_levelorder - binary_tree_levelorder
 * @tree: tree in which to check
 * @func: the function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *queue[100];
	int front;
	int rear;
	const binary_tree_t *current;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	front = 0;
	rear = 0;

	/*Enqueue the root node*/
	queue[rear++] = tree;

	while (front < rear)
	{
		/*Dequeue a node and process its value*/
		current = queue[front++];

		func(current->n);

		/*Enqueue left and right children if they exist*/
		if (current->left != NULL)
		{
			queue[rear++] = current->left;
		}
		if (current->right != NULL)
		{
			queue[rear++] = current->right;
		}
	}
}
