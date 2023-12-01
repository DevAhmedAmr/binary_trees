#include "binary_trees.h"

int get_heights(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return 0;
	}

	left_height = get_heights(tree->left);
	right_height = get_heights(tree->right);

	return 1 + (left_height > right_height ? left_height : right_height);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return 1;
	}

	left_height = get_heights(tree->left);
	right_height = get_heights(tree->right);

	if (left_height != right_height)
	{
		return 0;
	}

	return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}
