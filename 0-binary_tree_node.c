#include "binary_trees.h"
/**
 * binary_tree_node - simply creat a new tree node then return it
 *
 * @parent: pointer to tree parent node
 * @value: node data which is an integer value
 * Return: (binary_tree_t*) newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);

}
