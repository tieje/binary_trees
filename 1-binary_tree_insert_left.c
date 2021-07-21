#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent
 * @value: value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *original_left = malloc(sizeof(binary_tree_t));

	if (!parent || !original_left)
		return (NULL);
	left_node->right = NULL;
	left_node->left = NULL;
	left_node->parent = parent;
	left_node->n = value;
	if (parent->left != NULL)
	{
		original_left = parent->left;
		left_node->left = original_left;
		original_left->parent = left_node;
		parent->left = left_node;
	}
	else
		parent->left = left_node;
	return (left_node);
}
