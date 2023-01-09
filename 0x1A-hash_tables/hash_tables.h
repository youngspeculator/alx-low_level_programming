#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s -  node of a hash table
 * @key: the key, string
 * The key is unique in the HashTable
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table data structure
 *
 * @size: the size of the array
 * @array: an array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct Shash_node_s - node of a sorted hash table
 * @key: the key, string
 * @value: the value corresponding to a key
 * @next: a pointer to the next node of the list
 * @Sprev: a pointer to the previous element of the Sorted Linked List
 * @Snext; a pointer to the next element of the Sorted Linked List
 */
typedef struct Shash_node_s
{
	char *key;
	char *value;
	struct Shash_node_s *next;
	struct Shash_node_s *prev;
	struct Shash_node_s *Snext;
} Shash_node_t;

/**
 * struct Shash_table_s - sorted hash table data structure
 * @size: the size of the array
 * @array: an array of size @size
 * each cell of the array is a pointer to the first node of a linked list,
 * since we want our HashTable to use a Chaining collidion handling
 * @Shead: a pointer to the first element of the sorted linked list
 * @Stail: a pointer to the last element of the sorted linked list
 */
typedef struct Shash_table_s
{
	unsigned long int size;
	Shash_node_t **array;
	Shash_node_t *Shead;
	Shash_node_t *Stail;
} Shash_table_t;

Shash_table_t *Shash_table_create(unsigned long int size);
int Shash_table_set(Shash_table_t *ht, const char *key, const char *value);
char *Shash_table_get(const Shash_table_t *ht, const char *key);
void Shash_table_print(const Shash_table_t *ht);
void Shash_table_print_rev(const Shash_table_t *ht);
void Shash_table_delete(Shash_table_t *ht);

#endif

