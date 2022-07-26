#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 *
 * @node: Pointer to the to check.
 *
 * Description: Checks if a given node have no parent node.
 *
 * Return: 1 if node has no parent (root), otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
