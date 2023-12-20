#include "binary_trees.h"
/**
 * binary_tree_height - find height of binary tree
 * @tree: root of tree
 *
 * Return: size of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (binary_tree_height(tree->left));
	return (binary_tree_height(tree->left) + 1);
}
