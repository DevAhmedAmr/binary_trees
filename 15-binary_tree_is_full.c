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
	if ((!tree->right && tree->left) || (tree->right && !tree->left)
		|| recCheck(tree->left) == 0  || recCheck(tree->right) == 0)
		return (0);
	return (1);

}



