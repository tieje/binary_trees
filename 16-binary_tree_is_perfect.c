#include "binary_trees.h"
#define MAX(a, b) (a < b ? b : a)

/**
 * binary_tree_height_helper - measures the height of a binary tree
 * @tree: tree
 * Return: height of a binary tree
 */
int binary_tree_height_helper(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	if (!(tree->left) != !(tree->right))
		return (-1);
	left_height = binary_tree_height_helper(tree->left);
	right_height = binary_tree_height_helper(tree->right);
	if (left_height == -1 || right_height == -1)
		return (-1);
	return (MAX(left_height, right_height) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height_helper(tree->left);
	r = binary_tree_height_helper(tree->right);

	if (l == -1 || r == -1)
		return (0);
	else
		return (l == r);
}
