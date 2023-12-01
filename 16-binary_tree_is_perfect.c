#include "binary_trees.h"
int get_level(const binary_tree_t *root);
int get_height(const binary_tree_t *root)
{
	if (root == NULL)
		return 0;

	int left_height = get_height(root->left);
	int right_height = get_height(root->right);

	if (left_height > right_height)

		return left_height + 1;
	else
		return right_height + 1;
}

int is_all_leaves_at_same_level(const binary_tree_t *root, int leaf_level)
{
	int current_level;

	if (root == NULL)
	{
		return 1;
	}

	current_level = get_level(root);

	if (current_level != leaf_level)
		return 0;

	return is_all_leaves_at_same_level(root->left, leaf_level) &&
		   is_all_leaves_at_same_level(root->right, leaf_level);
}

int get_level(const binary_tree_t *root)
{
	int right_level, left_level;

	if (root == NULL)

		return 0;

	left_level = get_level(root->left);
	right_level = get_level(root->right);

	if (left_level > right_level)

		return left_level + 1;

	else

		return right_level + 1;
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, leaf_level;

	if (tree == NULL)
	{
		return 1;
	}

	height = get_height(tree);
	leaf_level = height;

	return is_all_leaves_at_same_level(tree, leaf_level);
}
