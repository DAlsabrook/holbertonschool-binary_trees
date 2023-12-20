#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*1 if full. 0 if not*/
	int res = 1;
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right != NULL) ||
	 (tree->right == NULL && tree->left != NULL))
	{
		return (0);
	}
	if (res == 1 && tree->left != NULL)
	{
		res = binary_tree_is_full(tree->left);
		if (res == 0)
			return (0);
	}
	if (res == 1 && tree->right != NULL)
	{
		res = binary_tree_is_full(tree->right);
		if (res == 0)
			return (0);
	}
	return (1);
}
