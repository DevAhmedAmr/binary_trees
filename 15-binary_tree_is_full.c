#include "binary_trees.h"
/**
 *binary_tree_is_full -  checks if a concern binary tree is full
 * @tree: pointer to root node of the concern tree
 * Return: number of nodes that has to child if it parent or no
 * child if it leaves ,(0) if tree pointer is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		is_full = 1 + binary_tree_is_full(tree->left);
		is_full = 1 + binary_tree_is_full(tree->right);
	}
	else
	{
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	}
	return (is_full);

}


