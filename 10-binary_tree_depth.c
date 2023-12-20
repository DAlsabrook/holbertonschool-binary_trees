#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth of a node
 * @tree: Node to measure dpeth of
 *
 * Return: depth of node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;
	binary_tree_t *current = tree;

	if (tree == NULL)
		return (0);
	for (i = -1; current != NULL; i++)
	{
		current = current->parent;
	}

	return (i);
}
