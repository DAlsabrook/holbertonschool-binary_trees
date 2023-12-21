#include "binary_trees.h"
/**
 * binary_tree_sibling - find the sibling of a node
 * @node: node to find sibling of
 * 
 * Return: pointer to sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	/*Node is parents left*/
	if (node->parent->left != NULL && node->parent->left == node)
	{
		sibling = node->parent->right;
	}
	/*Node is parents right*/
	if (node->parent->right != NULL && node->parent->right == node)
	{
		sibling = node->parent->left;
	}
	return (sibling);
}
