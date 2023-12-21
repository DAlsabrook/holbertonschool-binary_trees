#include "binary_trees.h"
/**
 * binary_tree_uncle - find uncle of a current
 * @node: current to find uncle of
 *
 * Return: pointer to uncle current
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *current = node;

	if (current == NULL ||
	 current->parent == NULL ||
	  current->parent->parent == NULL)
		return (NULL);
	current = node->parent;
	if (current->parent->left != NULL && current->parent->left == current)
	{
		uncle = current->parent->right;
	}
	/*Node is parents right*/
	if (current->parent->right != NULL && current->parent->right == current)
	{
		uncle = current->parent->left;
	}
	return (uncle);
}
