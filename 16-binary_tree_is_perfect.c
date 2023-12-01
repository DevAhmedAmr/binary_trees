#include "binary_trees.h"
/* 1.Every nodes has two children. */
/* 2.All leaves are at the same level */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num1 = 0, num2 = 0;

	if (!tree)
		return (0);

	if (tree->left)
		num1 = 1 + binary_tree_height(tree->left);

	if (tree->right)
		num2 = 1 + binary_tree_height(tree->right);

	return num1 > num2 ? num1 : num2;
}

int count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return 0;

	return 1 + count_nodes(tree->left) + count_nodes(tree->right);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return 1;

	unsigned int node_count = count_nodes(tree);
	unsigned int height = binary_tree_height(tree);

	unsigned int max_nodes = (1 << (height + 1)) - 1;

	return (node_count == max_nodes);
}
