#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * @tree: pointer to the node to measure the depth
 * Return: depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;

	if (!tree)

		return (0);

	if (tree->parent)
		num = 1 + binary_tree_depth(tree->parent);

	return (num);
}
