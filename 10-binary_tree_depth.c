#include "binary_trees.h"
/**
 * binary_tree_depth_helper - measure the depth of a binary tree
 * @tree: tree
 * Return: size of nodes
 */
size_t binary_tree_depth_helper(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree->parent == NULL)
		return (depth);
	return (binary_tree_depth_helper(tree->parent) + 1);
}
/**
 * binary_tree_depth - measure the depth of a binary tree
 * @tree: tree
 * Return: size of nodes
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (binary_tree_depth_helper(tree));
}
