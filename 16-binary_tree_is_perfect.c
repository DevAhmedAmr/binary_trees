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

int binary_tree_is_perfect_jr(const binary_tree_t *tree, int level)
{
	int left_height, right_height;

	if (level == 0 && (tree == NULL))
		return 0;

	if (tree == NULL)
		return 1;

	left_height = get_heights(tree->left);
	right_height = get_heights(tree->right);

	if (left_height != right_height)
	{
		return 0;
	}

	return binary_tree_is_perfect_jr(tree->left, level + 1) &&
		   binary_tree_is_perfect_jr(tree->right, level + 1);
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return binary_tree_is_perfect_jr(tree, 0);
}
