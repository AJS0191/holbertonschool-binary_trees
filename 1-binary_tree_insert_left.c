#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child
 * @parent: current node future parent
 * @value: value for left child
 * Return: pointer to new child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChild;

	if (parent == NULL)
		return (NULL);
	leftChild = binary_tree_node(parent, value);
	if (leftChild == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		(parent->left)->parent = leftChild;
		leftChild->left = parent->left;
	}
	parent->left = leftChild;
	return (leftChild);
}
