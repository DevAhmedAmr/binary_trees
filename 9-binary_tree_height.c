
#include "binary_trees.h"

/**
 * binary_tree_height - goes through a binary tree using
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return: the hight of a binary tree
 * عظمة يا رايق:man_bowing:
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (!tree)
		return (-1);

	right_height += binary_tree_height(tree->left) + 1;
	left_height += binary_tree_height(tree->right) + 1;

	return right_height > left_height ? right_height : left_height;
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
