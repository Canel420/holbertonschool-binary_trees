#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 *
 * @node: pointer to the node to check.
 *
 * Description: Search a given node in a binary tree and
 * check if both children are NULL.
 *
 * Return: 1 if children are NULL (leaf node) or 0 if not.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
