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
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (parent->left)
	{
		new->right = parent->left;
		/* make new node as parent for node which perviously was child  parent node*/
		new->right->parent = new;
	}
	parent->left = new;
	new->parent = parent;

	return (new);
}
