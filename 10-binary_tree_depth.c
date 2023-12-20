#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth of a node
 * @tree: Node to measure dpeth of
 *
 * Return depth of node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (-1);
	return (binary_tree_depth(tree->parent + 1));
}
