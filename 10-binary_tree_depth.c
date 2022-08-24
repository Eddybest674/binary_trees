#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of the tree;
 * @node: the node to check depth
 *
 * Return: returns the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
size_t depth;

if (!node)
return (0);
depth = 0;

if (node->parent != NULL)
{
depth++;
depth += binary_tree_depth(node->parent);
}
return (depth);
}
