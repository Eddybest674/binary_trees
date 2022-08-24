#include "binary_trees.h"
/**
 *binary_tree_delete - deletes all node in a binary tree
 *@tree: pointer to the root node
 *
 *Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
if (tree->left != NULL)
binary_tree_delete(tree->left);
if (tree->right != NULL)
binary_tree_delete(tree->right);
free(tree);
}
