#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a node to the right.
 * @tree: A pointer to the node to rotate.
 *
 * Return: The new root node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root,  *new_root, *new_root_rc, *root_p;

	if (tree == NULL)
		return (NULL);
	root = tree, root_p = root->parent;
	if ((root->left == NULL) && (root->right == NULL))
	{
		if ((root->parent != NULL) && (root->parent->left == root))
		{
			if (root_p->parent != NULL && (root_p->parent->left == root_p))
				root_p->parent->left = root;
			if (root_p->parent != NULL && (root_p->parent->right == root_p))
				root_p->parent->right = root;
			root->parent = root_p->parent;
			root_p->left = NULL, root_p->parent = root;
			root->right = root_p;
		}
	}
	else
	{
		if (root->left != NULL)
		{
			new_root = root->left, new_root->parent = root->parent;
			new_root_rc = new_root->right, new_root->right = root;
			if (root->parent != NULL)
			{
				if (root->parent->left == root)
					root->parent->left = new_root;
				if (root->parent->right == root)
					root->parent->right = new_root;
			}
			root->left = new_root_rc, root->parent = new_root;
			if (new_root_rc != NULL)
				new_root_rc->parent = root;
		}
	}
	return (new_root);
}
