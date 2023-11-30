#include "binary_trees.h"
size_t branch_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
}
size_t branch_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (!tree)
		return (-1);

	right_height += binary_tree_height(tree->left) + 1;
	left_height += binary_tree_height(tree->right) + 1;

	return right_height > left_height ? right_height : left_height;
}