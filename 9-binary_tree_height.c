
#include "binary_trees.h"

/**
 * binary_tree_height - function that  measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the
 * balance factor
 *
 * Return: height of a binary tree
 * عظمة يا رايق:man_bowing:
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

	return (_max(num1, num2));
}
/**
 * _max - function that return the bigger value
 * @num1: first number
 * @num2: second number
 * Return: the bigger value
 */
size_t _max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);

	return (num2);
}
