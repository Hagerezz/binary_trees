#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left node
 * @parent: the parent
 * @value: the value
 * Return: pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;
    binary_tree_t *temp;

    if (parent == NULL)
        return (NULL);
    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);
    node->n = value;
    node->parent = parent;
    node->right = NULL;
    temp = parent->left;
    parent->left = node;
    if (temp != NULL)
        temp->parent = node;
    
    node->left = temp;
    return (node);
}