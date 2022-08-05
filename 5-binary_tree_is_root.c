#include "binary_trees.h"

/**
 * binary_tree_is_root - node is root true?
 * @node: node being checked
 * Return: 1 if true 0 is false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	return (0);
}
