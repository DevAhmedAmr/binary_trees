#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the nodes with at least
 *  1 child in a binary tree
 * @tree: pointer to root node of the concern tree
 *
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t leaves = 0;

    if (!tree)
        return 0;
    if (tree->left || tree->right)
        leaves++;

    leaves += binary_tree_nodes(tree->left);
    leaves += binary_tree_nodes(tree->right);
    return leaves;
}

/*size_t binary_tree_leaves(const binary_tree_t *tree)*/
/*{*/
/*size_t leavCount = 0;*/

/*if (!tree)*/
/*  return (0);*/

/*if (!tree->left && !tree->right)*/
/*{*/
/*  leavCount++;*/
/*leavCount += binary_tree_leaves(tree->left);*/
/*leavCount += binary_tree_leaves(tree->right);*/
/* }*/
/*else*/
/*{*/
/*  leavCount += binary_tree_leaves(tree->left);*/
/*leavCount += binary_tree_leaves(tree->right);*/
/*}*/
/*return (leavCount);*/
/*}*/