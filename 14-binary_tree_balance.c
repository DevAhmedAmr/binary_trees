#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return:  balance factor, (0) if tree is NULL
 * عظمة يا رايق:man_bowing:
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t LEFT = 0, RIGHT = 0;

	if (!tree)
		return (0);


	if (tree->left)
	{
		LEFT++;
		LEFT += binary_tree_balance(tree->left);

	}
	if (tree->right)
	{
		RIGHT++;
		RIGHT += binary_tree_balance(tree->right);
	}

	return (LEFT - RIGHT);
}
