#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: root of tree
 *
 * Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current = tree;

	if (tree == NULL)
		return;
	if (current->left == NULL && current->right == NULL)
		return;
	if (current->left != NULL)
		binary_tree_delete(current->left);
	if (current->right != NULL)
		binary_tree_delete(current->right);
	free(current);
}
