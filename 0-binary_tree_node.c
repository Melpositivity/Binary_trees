#include "binary_trees.h"
/**
 * binary_tree_node - creates Binary tree node
 * @value: The value to be assigned to our new node
 * @parent: Pointer to the parent in binary_tree_t
 * Return: null if error occcurs otherwise apointer to a new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	if new_node == NULL
		return (NULL);

		new_n = value;
		new_parent = parent;
		new_left = NULL;
		new_right = NULL;

		return (new);
}
