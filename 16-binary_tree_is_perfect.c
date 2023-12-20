#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect. 0 if NOT
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 1;

	if (tree == NULL)
		return (0);
	/*check if tree is "full"*/
	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->right == NULL && tree->left != NULL))
	{
		return (0);
	}
	if (res == 1 && tree->left != NULL)
	{
		res = binary_tree_is_perfect(tree->left);
		if (res == 0)
			return (0);
	}
	if (res == 1 && tree->right != NULL)
	{
		res = binary_tree_is_perfect(tree->right);
		if (res == 0)
			return (0);
	}
	if (tree->left == NULL && tree_height(tree->parent) == 0)
		return (1);
	return (0);
}

/**
 * tree_height - get height of tree
 * @tree: node to check
 *
 * Return: 0 if perfect
 */
int tree_height(const binary_tree_t *tree)
{
	int l, r;

	if (tree->left != NULL)
		l = tree_height(tree->left) + 1;
	if (tree->right != NULL)
		r = tree_height(tree->right) + 1;
	return (l - r);
}
