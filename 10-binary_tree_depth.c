#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node
 * @tree: node being measured
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *tmp;

	if (!tree)
		return (0);
	tmp = (binary_tree_t *)tree;
	while (tmp->parent)
	{
		depth++;
		tmp = tmp->parent;
	}
	return (depth);
}
