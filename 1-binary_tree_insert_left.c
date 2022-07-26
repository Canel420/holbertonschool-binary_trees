#include "binary_trees.h"

/**
 * binary_tree_insert_left -  Inserts a node as the left-child of another node.
 *
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Description: Search for a given parent node and
 * adds a left node to it. If the node already exists, inserts the new node
 * and give th old left node to the new one.
 *
 * Return: pointer to new binary_tree_t type node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;

	return (new);
}
