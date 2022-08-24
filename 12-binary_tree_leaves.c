#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves of the tree;
 * @node: the node to check depth
 *
 * Return: returns the leaf count
 */
size_t binary_tree_leaves(const binary_tree_t *node)
{
	size_t leaves;

	if (!node)
		return (0);
	leaves = 0;
	if (node->left != NULL)
		leaves += binary_tree_leaves(node->left);
	if (node->right != NULL)
		leaves += binary_tree_leaves(node->right);
	if (node->left == NULL && node->right == NULL)
		leaves++;
	return (leaves);
}
