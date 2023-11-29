
#include "binary_trees.h"

/**
 * binary_tree_height - goes through a binary tree using
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num1 = 0, num2 = 0;
	if (!tree)
		return (0);

	if (tree->left)
		num1 = 1 + binary_tree_height(tree->left);

	if (tree->right)
		num2 = 1 + binary_tree_height(tree->right);
	return max(num1, num2);
}
size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return num1;

	return (num2);
}