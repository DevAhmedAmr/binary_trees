#include "binary_trees.h"

/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first concern node
 * @second: pointer to second concern node
 * Return: (binary_tree_t*) pointer to the lowest common ancestor no
 * of the two  given nodes
 * (NULL) If no common ancestor was found, your
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *tmp_f, *tmp_s;

	if (!first || !second)
		return (0);

	for (tmp_f = first->parent; tmp_f; tmp_f = tmp_f->parent)
		for (tmp_s = second->parent; tmp_s; tmp_s = tmp_s->parent)
			if (tmp_f == tmp_s)
				return (tmp_f);

	return (0);
}
