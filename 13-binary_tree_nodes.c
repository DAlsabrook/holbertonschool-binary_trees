#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with atleast 1 child
 * @tree: root of tree
 *
 * Return: number of nodes with atleast 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
	}
	return (count);
}
