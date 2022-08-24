#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is a leaf;
 * @node: node to check
 *
 * Return: returns a 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
return (0);
if (node->parent != NULL)
return (0);
return (1);
}
