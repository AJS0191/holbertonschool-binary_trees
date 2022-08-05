#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: current node future parent
 * @value: value for right child
 * Return: pointer to new child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChild;

	if (parent == NULL)
		return (NULL);
	rightChild = binary_tree_node(parent, value);
	if (rightChild == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		(parent->right)->parent = rightChild;
		rightChild->right = parent->right;
	}
	parent->right = rightChild;
	return (rightChild);
}
