#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves of a tree
 * @tree: tree to use
 *
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		l = 1;
		r = 1;
	}
	return (l + r);
}
