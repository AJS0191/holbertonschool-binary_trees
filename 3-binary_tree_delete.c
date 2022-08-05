#include "binary_trees.h"

/**
 * binary_tree_delete - deletes all nodes of tree
 * @tree: a pointer to root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
