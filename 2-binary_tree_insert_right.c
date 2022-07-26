#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * Description: Search for a given parent node and adds a rigth node to it.
 * If the node already exists, inserts the new node into parent
 * and give the old rigth node to the new one.
 *
 * Return: pointer to new binary_tree_t type node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}
