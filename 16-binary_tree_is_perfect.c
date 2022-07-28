#include "binary_trees.h"

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

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: Pointer  to the root node of the tree to measure the balance factor.
 * Return: the blance factor of given tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: Pointer  to the root node of the tree to check.
 * Return: 0 if given tree is not full or 1 if it is.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if tree is perfect and o if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree) == 1) && (binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
