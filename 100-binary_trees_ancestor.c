#include "binary_trees.h"

/**
 * binary_tree_depthh - height of a binary tree
 * @tree: a binary tree
 * Return: the height of the binary tree
*/

size_t binary_tree_depthh(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depthh(tree->parent));
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
    if (first->parent == second)
        return (first->parent);
    if (binary_tree_depthh(first) == binary_tree_depthh(second))
        return (binary_trees_ancestor(first->parent, second->parent));
    if (binary_tree_depthh(first) > binary_tree_depthh(second))
        return (binary_trees_ancestor(first, second->parent));
    if (binary_tree_depthh(first) < binary_tree_depthh(second))
        return (binary_trees_ancestor(first->parent, second));
    return (NULL);
}