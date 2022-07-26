#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a a binary tree using post-order traversal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: Traverse a tree until reach the bottom,
 * and traverse back to the top applying a function to each node
 * from left to rigth.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
