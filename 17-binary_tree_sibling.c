#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling
 * @node: the node
 * Return: the sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
