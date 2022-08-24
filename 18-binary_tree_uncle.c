#include "binary_trees.h"
/**
 * binary_tree_uncle - returns the uncle of the node
 * @node: the node that needs their uncle
 *
 * Return: returns that deadbeat uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent && node->parent->parent->right)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent && node->parent->parent->left)
		return (node->parent->parent->left);
	return (NULL);
}
