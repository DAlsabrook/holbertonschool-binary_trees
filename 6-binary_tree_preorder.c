#include "binary_trees.h"
/**
 * binary_tree_preorder - searches and processes each node
 * @tree: root of tree to search
 * @func: funciton pointer to use and pass node value
 *
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *current = tree;

	if (tree == NULL || func == NULL)
		return;
	func(current->n);
	binary_tree_preorder(current->left, func);
	binary_tree_preorder(current->right, func);
}
