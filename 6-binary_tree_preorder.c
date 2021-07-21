#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse binary tree with pre-order traversal
 * @tree: tree
 * @func: function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
