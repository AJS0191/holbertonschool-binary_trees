#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t heightR;
    size_t heightL;

	if (!tree)
		return (0);

	heightR = 1 + binary_tree_height(tree->right);
	heightL = 1 + binary_tree_height(tree->left);

	if (heightR >= heightL)
		return (heightR);
	else
		return (heightL);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
