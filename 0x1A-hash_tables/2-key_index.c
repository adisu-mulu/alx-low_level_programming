#include "hash_tables.h"
/**
 * key_index - function that computes the key
 * @key: pointer param
 * @size: size of table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key));

}
