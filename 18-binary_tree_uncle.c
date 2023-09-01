#include "binary_trees.h"

/**
 * binary_tree_uncle - returns a binary tree
 * @node: the node
 * Return: the uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *father = node->parent;

    if (node == NULL || father == NULL || father->parent == NULL)
        return (NULL);
    if (father == father->parent->left)
        return (father->parent->right);
    else
        return (father->parent->left);
}