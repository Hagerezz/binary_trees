#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right node
 * @parent: the parent
 * @value: the value
 * Return: pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *temp;

    if (node == NULL || parent == NULL)
        return (NULL);
    node->n = value;
    node->parent = parent;
    node->left = NULL;
    temp = parent->right;
    parent->right = node;
    if (temp != NULL)
        temp->parent = node;
    
    node->right = temp;
    return (node);
}