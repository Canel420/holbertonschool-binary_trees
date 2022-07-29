#include "binary_trees.h"

/**
 * binary_tree_height - Traverse a binary tree using in-order traversal .
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: the length of the longest path (height).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_path = 0;
	size_t right_path = 0;

	if (tree == NULL)
		return (0);

	left_path += 1 + binary_tree_height(tree->left);
	right_path += 1 + binary_tree_height(tree->right);

	if (left_path > right_path)
		return (left_path);
	return (right_path);
}

/**
 * binary_tree_current - Apply a function to the nodes of a given level.
 *
 * @tree: Pointer to the  node of the tree.
 * @level: level of the given node.
 * @func: function to apply.
 *
 * Description: Checks the level of the node, and pply
 * a given function when the level is 1.
 */
void binary_tree_current(const binary_tree_t *tree, size_t level,
						 void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		binary_tree_current(tree->left, level - 1, func);
		binary_tree_current(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Traverse  binary tree using level-order traversal.
 *
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.\
 *
 * Description: makes use of binary_tree_current apply a function to nodes
 * at all levels one by one starting from the root.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h = 0, i = 0;

	if (tree == NULL || func == NULL)
		return;

	h = binary_tree_height(tree);
	for (; i <= h; i++)
		binary_tree_current(tree, i, func);
}
