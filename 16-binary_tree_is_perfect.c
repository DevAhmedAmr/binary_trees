#include "binary_trees.h"

int recCheck(const binary_tree_t *tree);
/**
 * binary_tree_is_full -  checks if a concern binary tree is full
 * @tree: pointer to root node of the concern tree
 * Return: number of Count that has to child if it parent or no
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
 * full parent Count or leaves .
 * @tree: A pointer to the root node of concern tree list.
 * Return: (1)If tree is full, (0).Otherwise .
 */
int recCheck(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((!tree->right && tree->left) || (tree->right && !tree->left)
		|| recCheck(tree->left) == 0  || recCheck(tree->right) == 0)
		return (0);
	return (1);

}



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
 * _power - exponent of a
 * @base: base of num
 * @N: N of num
 *
 * Return: SIZE of tree or NULL if tree empty
 */
int _power(int base, int N)
{
	int power = 1, i;

	for (i = 1; i <= N; i++)
		power *= base;
	return (power);
}

#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 *post-order traversal
 * @tree: pointer to root node of the concern tree
 * Return: the size of a binary tree
 * عظمة يا رايق:man_bowing:
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t SIZE = 0;

	if (tree)
	{
		SIZE++;
		SIZE += binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (SIZE);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to concern tree
 * Return: (1) if tree if perfect (0) otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int  Count = 0, SIZE = 0, tree_hight = 0;

	if (tree)
	{
		tree_hight = binary_tree_height(tree) + 1;
		SIZE = binary_tree_size(tree);
		Count = _power(2, tree_hight);

		if (SIZE == (Count - 1))
			return (1);
		else
			return (0);
	}
	return (0);
}
