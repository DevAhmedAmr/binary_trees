
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return: the size of a binary tree
 * عظمة يا رايق:man_bowing:
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavCount = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			leavCount++;
			leavCount += binary_tree_leaves(tree->left);
			leavCount += binary_tree_leaves(tree->right);
		}
		else
		{
			leavCount += binary_tree_leaves(tree->left);
			leavCount += binary_tree_leaves(tree->right);
		}
	}
	return (leavCount);
}
