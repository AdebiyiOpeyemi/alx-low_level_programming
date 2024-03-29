# C - Hash Table

A hash table also called a hash map, is a data structure that maps keys to values that implements an associative array or dictionary. A hash table uses a hash function to compute an index, also called the hash code into an array of slots, from which the desired value can be found.

This directory contain file that implements above mentioned Hash Table.

## File Description
- hash_tables.h: header file of the Hash Table.
- 0-hash_table_create.c: creates a hash table.
- 1-djb2.c: creates a hash function implementing the djb2 algorithm.
- 2-key_index.c: return the index of a key (index = hash code % size_of_array)
- 3-hash_table_set.c: adds an element to the hash table.
- 4-hash_table_get.c: retrieves a value associated with a key in a hash table.
- 5-hash_table_print.c: prints a hash table.
- 6-hash_table_delete.c: deletes a hash table.

## Environments
- Language: C
- OS: Ubuntu 20.04
- Compiler: gcc
- Code Style: Betty Style

## Author
- [Opeyemi](https://www.linkedin.com/public-profile/settings?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_self_edit_contact-info%3Ba3NCXyzLR3ex4H9XExAWtg%3D%3D)
