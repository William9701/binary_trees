#include "binary_trees.h"
/**
 * array_to_bst - array_to_bst
 * @array: array to convert to tree
 * @size: size of the array
 * Return: a pointer to an array
*/
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
