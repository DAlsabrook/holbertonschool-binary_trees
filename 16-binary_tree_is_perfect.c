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
		return (1);
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
	return (1);
}
