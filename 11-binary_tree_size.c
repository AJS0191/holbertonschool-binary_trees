#include "binary_trees.h"
/**
 * binary_tree_size - finds size of tree
 * @tree: root node
 * Return: size 
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t nodesL, nodesR;

	if (tree == NULL)
		return (0);

	nodesL = binary_tree_size(tree->left);
	nodesR = binary_tree_size(tree->right);

	return (nodesL + nodesR + 1);
}
