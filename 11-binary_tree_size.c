
#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return: the size of a binary tree
 * عظمة يا رايق:man_bowing:
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t SIZE = 0;

	if (tree)
	{
		SIZE++;
		SIZE += binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (SIZE);
}
