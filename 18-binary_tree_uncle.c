#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to concern node
 * Return: (binary_tree_t * node)  sibling of concern node ,
 * (0) if not, or parent or concern node is null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node)
		return (0);
	return (binary_tree_sibling(node));
}

/*
					     [*B|root A |*C]

			[*D |B| *C]   				          [*E|C|*F]

[NULL |D| NULL]   [NULL|C|NULL]			[NULL|E| NULL]   [NULL|F|NULL]
*/