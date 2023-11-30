#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to concern node
 * Return: (binary_tree_t * node)  sibling of concern node ,
 * (0) if not, or parent or concern node is null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
	}

	return (NULL);
}


/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to concern node
 * Return: (binary_tree_t * node)  sibling of concern node ,
 * (0) if not, or parent or concern node is null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node)
		return (0);
	return (binary_tree_sibling(node->parent));
}

