# C - Hash Table

A hash table also called a hash map, is a data structure that maps keys to values that implements an associative array or dictionary. A hash table uses a hash function to compute an index, also called the hash code into an array of slots, from which the desired value can be found.

This directory contain file that implements above mentioned Hash Table.

## File Description
- hash_tables.h: header file of the Hash Table.
- 0-hash_table_create.c: creates a hash table.
- 1-djb2.c: creates a hash function implementing the djb2 algorithm.
- 2-key_index.c: return the index of a key (index = hash code % size_of_array)
- 3-hash_table_set.c: adds an element to the hash table.
