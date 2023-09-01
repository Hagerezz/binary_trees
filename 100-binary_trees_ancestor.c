#include "binary_trees.h"

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
}