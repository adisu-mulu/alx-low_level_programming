#include "hash_tables.h"
/**
 * hash_table_create - a function that will create the hash table
 * @size: the size of the table
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	return (table);
}
