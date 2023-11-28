#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree using recursion.
 * @tree: The root node of the concerned  tee.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*minee*/
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
