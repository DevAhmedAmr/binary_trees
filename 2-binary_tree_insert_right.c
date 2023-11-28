#include "binary_trees.h"
/**
 * binary_tree_insert_right -  inserts a node as the left-child of another node
 *
 * @parent: pointer to tree parent node
 * @value: node data which is an integer value
 * Return: (binary_tree_t*) newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (0);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left)
	{
		new->right = parent->right;
		/* make new node as parent for node which perviously was child  parent node*/
		parent->right->parent = new;
	}
	parent->right = new;
	new->parent = parent;

	return (new);
}
