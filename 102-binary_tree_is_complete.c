#include "binary_trees.h"
/**
 * binary_tree_is_complete - binary_tree_is_complete
 * @tree: tree to chk on
 * Return: 1 for complete tree and 0 for incomplete tree
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int level_complete = 1, reached_last_level = 0, front = 0, rear = 0;
	binary_tree_t *queue[1000];

	if (tree == NULL)
	{
		return (0);
	}
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		if (current->left != NULL)
		{
			if (reached_last_level)
			{
				level_complete = 0;
				break;
			}
			queue[rear++] = current->left;
		}
		else
		{
			reached_last_level = 1;
		}
		if (current->right != NULL)
		{
			if (reached_last_level)
			{
				level_complete = 0;
				break;
			}
			queue[rear++] = current->right;
		}
		else
		{
			reached_last_level = 1;
		}
	}
	return (level_complete);
}
