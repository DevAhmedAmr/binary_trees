#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @parent: pointer to tree parent node
 * @value: node data which is an integer value
 * Return: (binary_tree_t*) newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *old_node = NULL;
	int has_old_node = 0;

	if (!parent)
		return (0);

	new_node = binary_tree_node(parent, value);

	has_old_node = parent->left != NULL;

	if (has_old_node == 1)
		old_node = parent->left;

	parent->left = new_node;

	if (has_old_node == 1)
	{
		new_node->left = old_node;
		old_node->parent = new_node;
	}

	return (new_node);
}
