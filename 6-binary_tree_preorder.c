#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the binary tree using preorder traversal
 * @tree: the root of the tree
 * @func: function to apply to nodes
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
func(tree->n);
if (tree->left != NULL)
binary_tree_preorder(tree->left, func);
if (tree->right != NULL)
binary_tree_preorder(tree->right, func);
}
