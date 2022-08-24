#include "binary_trees.h"
/**
 *binary_tree_is_leaf - checks if a node is a leaf node
 *@node: node to check
 *Return: 1 if true or 0 if false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);
if (node->left != NULL || node->right != NULL)
return (0);
return (1);
}
