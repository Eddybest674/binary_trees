#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of the binary tree
 * @tree: the root of the binary tree
 *
 * Return: returns the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

size_t lheight, rheight;
if (!tree)
return (0);
lheight = 0;
rheight = 0;
if (tree->left != NULL)
{
lheight++;
lheight += binary_tree_height(tree->left);
}
if (tree->right != NULL)
{
rheight++;
rheight += binary_tree_height(tree->right);
}
if (lheight > rheight)
return (lheight);
else
return (rheight);

}
