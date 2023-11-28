#include "binary_trees.h"

/**
 * binary_tree_is_leaf - hecks if a node is a leaf
 * @node: pointer to concerned node
 * Return: (1) if concerned node is a leaf , (0) otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node || node->left || node->right)
        return (0);
    return (1);
}

