#include "binary_trees.h"

int get_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	int left_height = get_height(tree->left);
	int right_height = get_height(tree->right);

	return 1 + (left_height > right_height ? left_height : right_height);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 1;
	}

	int left_height = get_height(tree->left);
	int right_height = get_height(tree->right);

	if (left_height != right_height)
	{
		return 0;
	}

	return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}
