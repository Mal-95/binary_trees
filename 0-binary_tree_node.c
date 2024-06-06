#include "binary_trees.h"
/**
 * binary_tree_node - A binary tree is made by this node
 * @parent: Pointer to parent-node of the recent node
 * @value: value to be stored in the new node
 * Return: Pointer to recently created node
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
