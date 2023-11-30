#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to root node of the concern tree
 * Return: 1 if full , 0 if not
 * عظمة يا رايق:man_bowing:
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left == right);
}
