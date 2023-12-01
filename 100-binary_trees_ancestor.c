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
	binary_tree_t *reload;

	if (!first && !second)
		return (NULL);

	while (first)
	{
		reload = (binary_tree_t *)second;
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			if (second->parent)
				second = second->parent;
			else
				break;
		}
		second = reload;
		if (first->parent)
			first = first->parent;
		else
			break;
	}
	return (NULL);
}
