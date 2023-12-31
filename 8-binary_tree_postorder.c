#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse tree in order and run func
 * @tree: tree root
 * @func: function pointer to run
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
