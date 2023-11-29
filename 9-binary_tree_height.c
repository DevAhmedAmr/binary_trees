
#include "binary_trees.h"

size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return num1;

	return num2;
}
/**
 * binary_tree_height - goes through a binary tree using
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return -1;

	size_t num1 = 1 + binary_tree_height(tree->left);
	size_t num2 = 1 + binary_tree_height(tree->right);
	return max(num1, num2);
}