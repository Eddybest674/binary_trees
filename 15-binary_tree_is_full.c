#include "binary_trees.h"
/**
 * binary_tree_is_full - returns the balance of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 0 || right == 0)
		return (0);

	return (1);
}
