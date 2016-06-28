/****************************************************************************
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 6
 *
 * Implements a dictionary's functionality.
 ***************************************************************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "dictionary.h"

#define ALPHABETS 26

// Trie node
typedef struct trieNode {
	bool isLeaf;
	struct trieNode *node[ALPHABETS];
} trieNode;

// Prototypes
trieNode *getNode(void);
void insertInTrie(char *word);

// Global variables
trieNode *rootNode;

/*
 * Returns true if word is in dictionary else false.
 */

bool
check(const char *word)
{
	// TODO
	return false;
}


/*
 * Loads dictionary into memory.  Returns true if successful else false.
 */

bool
load(const char *dictionary)
{
	char *word = NULL;
	size_t len = 0;

	FILE *fp = fopen(dictionary, "r");

	if (fp == NULL) return false;

	rootNode = getNode();

	while (getline(&word, &len, fp) != -1){

	}

	free(rootNode);

	return true;
}


/*
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */

unsigned int
size(void)
{
	// TODO
	return 0;
}


/*
 * Unloads dictionary from memory.  Returns true if successful else false.
 */

bool
unload(void)
{
	// TODO
	return false;
}

/*
 * Get new node
 */
trieNode *getNode() {
	trieNode *T = (trieNode *) malloc(sizeof(trieNode));
	T -> isLeaf = true;
	for (int i = 0; i < ALPHABETS; ++i)
		T -> node[i] = NULL;
	return T;
}

void insertInTrie(char *word){
	
}
