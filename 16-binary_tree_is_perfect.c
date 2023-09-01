#include "binary_trees.h"

/**
 * binary_tree_heighttt - height of a binary tree
 * @tree: a binary tree
 * Return: the height of the binary tree
*/

size_t binary_tree_heighttt(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;

    if (tree == NULL)
        return (0);
    left_height = binary_tree_heighttt(tree->left);
    right_height = binary_tree_heighttt(tree->right);
    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - balance of a binary tree
 * @tree: a binary tree
 * Return: 1 if the binary tree is perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
        return (0);
    left = binary_tree_heighttt(tree->left);
    right = binary_tree_heighttt(tree->right);
    if (left != right)
        return (0);
    else
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        else
            return (1 && binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
    }
}