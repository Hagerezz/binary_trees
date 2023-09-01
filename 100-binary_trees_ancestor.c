#include "binary_trees.h"

/**
 * binary_tree_heightttt - height of a binary tree
 * @tree: a binary tree
 * Return: the height of the binary tree
*/

size_t binary_tree_heightttt(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_heightttt(tree->left);
	right_height = binary_tree_heightttt(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_trees_ancestor - returns the ancestor
 * @first: the first
 * @second: the second
 * Return: the ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return (NULL);
    if (first->parent == second->parent)
        return (first->parent);
    if (binary_tree_heightttt(first) == binary_tree_heightttt(second))
        return (binary_trees_ancestor(first->parent, second->parent));
    if (binary_tree_heightttt(first) > binary_tree_heightttt(second))
        return (binary_trees_ancestor(first->parent, second));
    if (binary_tree_heightttt(first) < binary_tree_heightttt(second))
        return (binary_trees_ancestor(first, second->parent));
    return (NULL);
}
