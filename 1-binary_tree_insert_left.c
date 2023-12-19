#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert to the left
 *
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);
}
