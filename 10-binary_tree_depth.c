#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: node to measure depth of
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree->parent == NULL)
		return (depth);
	return (binary_tree_depth(tree->parent) + 1);
}
