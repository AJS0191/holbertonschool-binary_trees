#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: root node
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t withC = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		withC = 1;
	return (withC + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right));
}
