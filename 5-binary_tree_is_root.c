#include "binary_trees.h"

/**
 * binary_tree_is_root - returns 1 if tree is a root
 * @node: the node
 * Return: 1 if tree is a root
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    if (node->left != NULL && node->right != NULL)
        return (1);
    else
        return (0);
}