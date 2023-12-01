#include "binary_trees.h"

int recCheck(const binary_tree_t *tree);
/**
 * binary_tree_is_full -  checks if a concern binary tree is full
 * @tree: pointer to root node of the concern tree
 * Return: number of nodes that has to child if it parent or no
 * child if it leaves ,(0) if tree pointer is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (recCheck(tree));
}

/**
 * recCheck - use recursion to check that all tree node is
 * full parent nodes or leaves .
 * @tree: A pointer to the root node of concern tree list.
 * Return: (1)If tree is full, (0).Otherwise .
 */
int recCheck(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((!tree->right && tree->left) || (tree->right && !tree->left) ||
		recCheck(tree->left) == 0 || recCheck(tree->right) == 0)
		return (0);
	return (1);
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
		LEFT = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		RIGHT = 1 + binary_tree_height(tree->right);
	}

	return (LEFT - RIGHT);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to concern tree
 * Return: (1) if tree if perfect (0) otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
