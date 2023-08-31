#include "binary_trees.h"

/**
 * binary_tree_heightt - height of a binary tree
 * @tree: a binary tree
 * Return: the height of the binary tree
*/

size_t binary_tree_heightt(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;

    if (tree == NULL)
        return (0);
    left_height = binary_tree_heightt(tree->left);
    right_height = binary_tree_heightt(tree->right);
    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - balance of a binary tree
 * @tree: a binary tree
 * Return: the balance of the binary tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    return (binary_tree_heightt(tree->left) - binary_tree_heightt(tree->right));
}