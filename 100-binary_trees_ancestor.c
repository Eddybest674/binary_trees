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

#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor
 * @first: the first node
 * @second: the second node
 *
 * Return: returns a pointer to the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *first_cp, *second_cp;
	int first_depth, second_depth;

	if (!first || !second)
		return (NULL);

	first_cp = first;
	second_cp = second;

	first_depth = binary_tree_depth(first_cp);
	second_depth = binary_tree_depth(second_cp);

	if (first_depth > second_depth)
	{
		first_cp = first_cp->parent;
		first_depth--;
	}
	else if (second_depth > first_depth)
	{
		second_cp = second_cp->parent;
		second_depth--;
	}

	while (first_cp != second_cp)
	{
		if (first_cp == second_cp)
			break;
		first_cp = first_cp->parent;
		second_cp = second_cp->parent;
	}
	return ((binary_tree_t *) first_cp);
}
