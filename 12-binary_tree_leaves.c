#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves of a tree
 * @tree: tree to use
 *
 * Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		leaves = 1;
	}
	return (leaves);
}
