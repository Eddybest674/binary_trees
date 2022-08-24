#include "binary_trees.h"
/**
 * binary_tree_height - returns the height of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;
	if (tree->left != NULL)
	{
		left_height++;
		left_height += binary_tree_height(tree->left);

	}
	if (tree->right != NULL)
	{
		right_height++;
		right_height += binary_tree_height(tree->right);
	}

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}


/**
 * binary_tree_balance - returns the balance of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (!tree->left)
		left_height--;
	if (!tree->right)
		right_height--;

	return (left_height - right_height);

}
