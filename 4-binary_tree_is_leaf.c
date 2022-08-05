#include "binary_trees.h"

/**
 * binary_tree_is_leaf - node is leaf true?
 * @node: node being checked
 * Return: 1 if true 0 is false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
