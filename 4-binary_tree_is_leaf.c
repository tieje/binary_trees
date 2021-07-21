#include "binary_trees.h"
/**
 * binary_tree_is_leaf - creates a binary tree node
 * @node: node
 * Return: binary_tree_t
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
