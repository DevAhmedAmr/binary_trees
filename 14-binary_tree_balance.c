#include "binary_trees.h"

/**
 * _max - function that return the bigger value
 * @num1: first number
 * @num2: second number
 * Return: the bigger value
 */
size_t  _max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);

	return (num2);
}

/**
 * binary_tree_height - goes through a binary tree using
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return: the hight of a binary tree
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
		LEFT  = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		RIGHT = 1 + binary_tree_height(tree->right);

	}

	return (LEFT - RIGHT);
}
