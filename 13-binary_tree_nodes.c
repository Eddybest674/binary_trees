#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with children
 * @node: the node to check
 *
 * Return: returns the nodes count
 */
size_t binary_tree_nodes(const binary_tree_t *node)
{
	size_t nodes;

	if (!node)
		return (0);
	nodes = 0;
	if (node->left != NULL)
		nodes += binary_tree_nodes(node->left);
	if (node->right != NULL)
		nodes += binary_tree_nodes(node->right);
	if (node->left != NULL || node->right != NULL)
		nodes++;
	return (nodes);
}
