
#include "binary_trees.h"

/**
 * binary_tree_nodes -  PnodeCount with at least 1 child in a binary tree
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return: number of PnodeCount with at least 1 child
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t PnodeCount = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		PnodeCount += 1;
		PnodeCount += binary_tree_nodes(tree->left);
		PnodeCount += binary_tree_nodes(tree->right);
	}
	else
	{
		PnodeCount += binary_tree_nodes(tree->left);
		PnodeCount += binary_tree_nodes(tree->right);
	}

	return (PnodeCount);
}
