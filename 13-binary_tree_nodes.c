#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the leaves in a binary tree
 * @tree: pointer node binary tree
 * Return: Number the leaves in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		leaves += 1;
	leaves += binary_tree_nodes(tree->left);
	leaves += binary_tree_nodes(tree->right);
	return (leaves);
}
