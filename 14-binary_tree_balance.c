#include "binary_trees.h"
#define MAX(a, b) (a < b ? b : a)

/**
 * binary_tree_height_helper - measures the height of a binary tree
 * @tree: tree
 * Return: height of a binary tree
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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height_helper(tree->left) -
		binary_tree_height_helper(tree->right)
	);
}
