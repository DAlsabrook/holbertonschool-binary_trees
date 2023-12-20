#include "binary_trees.h"
/**
 * binary_tree_balance - check for a balanced tree
 * @tree: tree to use
 *
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);
	return (left_height - right_height);
}
/**
 * height - find height of binary tree
 * @tree: root of tree
 *
 * Return: size of tree
 */
size_t height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = height(tree->left) + 1;
	if (tree->right != NULL)
		r = height(tree->right) + 1;
	return (l > r ? l : r);
}
