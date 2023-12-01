#include "binary_trees.h"
/* 1.Every nodes has two children. */
/* 2.All leaves are at the same level */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num1 = 0, num2 = 0;

	if (!tree)
		return (0);

	if (tree->left)
		num1 = 1 + binary_tree_height(tree->left);

	if (tree->right)
		num2 = 1 + binary_tree_height(tree->right);

	return num1 > num2 ? num1 : num2;
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return binary_tree_height(tree->left) == binary_tree_height(tree->right);
}
