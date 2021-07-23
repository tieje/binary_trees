#include "binary_trees.h"
#define MAX(a, b)  (a < b ? b : a)
/**
 * binary_tree_height_helper - measure the height of a binary tree
 * @tree: tree
 * Return: size of nodes
 */
size_t binary_tree_height_helper(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height_helper(tree->left);
	right_height = binary_tree_height_helper(tree->right);
	return (MAX(left_height, right_height) + 1);
}
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: tree
 * Return: size of nodes
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height_helper(tree) - 1);
}
