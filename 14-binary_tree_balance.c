#include "binary_trees.h"

size_t branch_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - function that measures the balance factor of
 * a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the
 * balance factor
 * Return:If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (branch_height(tree->left) - branch_height(tree->right));
}

/**
 * branch_height - function that  measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the
 * balance factor
 *
 * Return: height of a binary tree
 */
size_t branch_height(const binary_tree_t *tree)
{
	size_t right_height = 1, left_height = 1;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + branch_height(tree->left);

	if (tree->right)
		right_height = 1 + branch_height(tree->right);

	return (right_height > left_height ? right_height : left_height);
}
