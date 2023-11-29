#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node:checks if a given node is a root
 * Return:(1) if concern node is root (0) otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
	{
		return (0);
	}
	return (1);
}
