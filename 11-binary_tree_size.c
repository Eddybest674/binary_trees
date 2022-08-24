#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of the tree;
 * @node: the node to check depth
 *
 * Return: returns the size of the node
 */
size_t binary_tree_size(const binary_tree_t *node)
{
size_t size;

if (!node)
return (0);
size = 1;
if (node->left != NULL)
size += binary_tree_size(node->left);
if (node->right != NULL)
size += binary_tree_size(node->right);
return (size);
}
