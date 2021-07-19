#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent
 * @value: value
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *original_right = malloc(sizeof(binary_tree_t));

	if (!parent || !original_right)
		return NULL;
	right_node->left = NULL;
	right_node->right = NULL;
	right_node->parent = parent;
	right_node->n = value;
	if (parent->right != NULL)
	{
		original_right = parent->right;
		right_node->right = original_right;
		original_right->parent = right_node;
		parent->right = right_node;
	}
	else
		parent->right = right_node;
	return (right_node);
}
