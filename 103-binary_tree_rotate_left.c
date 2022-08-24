#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a node to the left.
 * @tree: A pointer to the node to rotate.
 *
 * Return: The new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root, *root_p, *root_r, *new_root, *new_root_lc;

	if (tree == NULL)
		return (NULL);
	root = tree, root_r = root->right, root_p = root->parent, new_root = root;
	if ((root->left == NULL) && (root->right == NULL))
	{
		if ((root->parent != NULL) && (root->parent->right == root))
		{
			if ((root_p->parent != NULL) && (root_p->parent->right == root_p))
				root_p->parent->right = root;
			if ((root_p->parent != NULL) && (root_p->parent->left == root_p))
				root_p->parent->left = root;
			root->parent = root_p->parent;
			root_p->right = NULL, root_p->parent = root;
			root->left = root_p;
		}
	}
	else
	{
		if (root_r != NULL)
		{
			new_root = root_r, new_root->parent = root->parent;
			new_root_lc = new_root->left, new_root->left = root;
			if (root->parent != NULL)
			{
				if (root->parent->left == root)
					root->parent->left = new_root;
				if (root->parent->right == root)
					root->parent->right = new_root;
			}
			root->right = new_root_lc, root->parent = new_root;
			if (new_root_lc != NULL)
				new_root_lc->parent = root;
		}
	}
	return (new_root);
}
