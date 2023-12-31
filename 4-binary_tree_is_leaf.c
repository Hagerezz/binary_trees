#include "binary_trees.h"

/**
 * binary_tree_is_leaf - returns 1 if the binary tree is a leaf
 * @node: pointer
 * Return: 1 if the binary tree is a leaf
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
