#include "binary_trees.h"
/**
 * binary_tree_height - find height of binary tree
 * @tree: root of tree
 *
 * Return: size of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		r = binary_tree_height(tree->right) + 1;
	return (l > r ? l : r);
}
