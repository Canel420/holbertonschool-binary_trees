#include "binary_trees.h"

/**
 * binary_tree_height - Traverse a binary tree using in-order traversal .
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: the length of the longest path (height).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_path = 0;
	size_t right_path = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_path += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_path += 1 + binary_tree_height(tree->right);

	if (left_path > right_path)
		return (left_path);
	else
		return (right_path);
}
