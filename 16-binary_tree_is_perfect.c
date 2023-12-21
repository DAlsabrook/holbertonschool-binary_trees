#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect. 0 if NOT
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_is_perfect(tree->left);
	if (tree->right != NULL)
		right = binary_tree_is_perfect(tree->right);
	if ((binary_tree_is_full(tree) == 1) && (binary_tree_balance(tree) == 0))
		return (left * right);
	return (0);
}
/**
 * binary_tree_is_full - check if tree is full
 * @tree: tree to check
 *
 * Return: 0 if not full. 1 if full.
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
/**
 * binary_tree_height - find height of binary tree
 * @tree: root of tree
 *
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 1, r = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		r = binary_tree_height(tree->right) + 1;
	return (l > r ? l : r);
}
/**
 * binary_tree_balance - check for a balanced tree
 * @tree: tree to use
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
