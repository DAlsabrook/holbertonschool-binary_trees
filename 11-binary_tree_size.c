#include "binary_trees.h"
/**
 * binary_tree_size - get the size of a tree
 * @tree: tree to measure
 *
 * Return: size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = -1, r = -1;

	if (tree == NULL)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
